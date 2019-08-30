NAME= libft.a
SRC= ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c
OBJ= $(SRC:.c=.o)

CC= gcc
RM= rm -rf
CFLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	@echo "Linking all files into .a file..."
	@ar rc $@ $(OBJ)
	@ranlib $@
	@echo "Linked"

%.o: %.c
	@echo "Compiling $< into .o file..."
	@$(CC) -o $@ -c $< $(CFLAGS)

clean:
	@echo "Deleting all .o..."
	@$(RM) $(OBJ)
	@echo "Deleted"

fclean: clean
	@echo "Deleting library..."
	@$(RM) $(NAME)
	@echo "Deleted"

re: fclean all