/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moakouda <moakouda@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 23:03:47 by moakouda          #+#    #+#             */
/*   Updated: 2019/08/29 23:12:20 by moakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    char    *ps1;
    char    *ps2;
    int     i;

    ps1 = (char *)s1;
    ps2 = (char *)s2;
    i = 0;
    while (n--)
        i = i + (*ps1++ - *ps2++);
    return (i);
}
