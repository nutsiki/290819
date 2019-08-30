/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moakouda <moakouda@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 23:17:00 by moakouda          #+#    #+#             */
/*   Updated: 2019/08/29 23:44:08 by moakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *strdup(const char *s)
{
    char *ps;

    if(!(ps = (char *)malloc(sizeof(char) * ft_strlen(s))))
        return (NULL);
    ft_strcpy(ps, s);
    return (ps);
}
