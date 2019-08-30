/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moakouda <moakouda@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 15:31:50 by moakouda          #+#    #+#             */
/*   Updated: 2019/08/29 22:23:17 by moakouda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *d;
    char *s;

    d = (char *)dest;
    s = (char *)src;
    while (n--)
    {
        if (s < d)
            *(d + n) = *(s + n);
        else
           *d++ = *s++;    
    }
    return (dest);
}