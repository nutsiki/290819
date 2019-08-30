/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moakouda <moakouda@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 22:23:02 by moakouda          #+#    #+#             */
/*   Updated: 2019/08/29 23:03:42 by moakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    char *ps;

    ps = (char *)s;
    while (n--)
    {
        if(*ps == (unsigned char)c)
            return (ps);
        *ps++;
    }
    return (NULL);
}
