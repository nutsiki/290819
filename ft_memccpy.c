/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moakouda <moakouda@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 06:51:10 by moakouda          #+#    #+#             */
/*   Updated: 2019/08/29 18:21:39 by moakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void* dest, const void *src, int c, size_t n)
{
    char *d;
    char *s;
    char *pd;

    d = (char *)dest;
    pd = d;
    s = (char *)src;
    while (n-- && *pd != (unsigned char)c)
        *pd++ = *s++;
    return (d);
}