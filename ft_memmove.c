/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:01:32 by tmidik            #+#    #+#             */
/*   Updated: 2024/10/17 18:25:33 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d = (unsigned char *)dst;
    const unsigned char *s = (const unsigned char *)src;

    if (!dst && !src)
        return (NULL);

    if (d < s)
    {
        while (len--)
            *d++ = *s++;
    }
    else
    {
        d += len;
        s += len;
        while (len--)
            *(--d) = *(--s);
    }
    return (dst);
}

#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello, World!";
    ft_memmove(str + 7, str, 5); // "Hello, Hello!"
    printf("%s\n", str); // Çıktı: "Hello, Hello!"
    
    char overlap[] = "123456789";
    ft_memmove(overlap + 3, overlap, 6); // "123123456"
    printf("%s\n", overlap); // Çıktı: "123123456"
    
    return 0;
}