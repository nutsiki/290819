/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moakouda <moakouda@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 05:04:56 by moakouda          #+#    #+#             */
/*   Updated: 2019/08/29 22:19:51 by moakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, void *src, size_t n)
{
    char *d;
    char *s;

    d = (char *) dest;
    s = (char *) src;

    while (n-- > 0)
        d++ = s++;
    return (dest);
}