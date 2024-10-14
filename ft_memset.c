/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:37:47 by tmidik            #+#    #+#             */
/*   Updated: 2024/10/14 16:41:28 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
    unsigned char *ptr = (unsigned char *)s; // Bellek bloğunu unsigned char işaretçisine dönüştür.
    while (n--) // n bayt boyunca doldurma yap.
    {
        *ptr = (unsigned char)c; // Belleğe verilen değeri yaz.
        ptr++; // Sonraki bayta ilerle.
    }
    return s; // Bellek bloğunun başlangıç adresini döndür.
}

#include <stdio.h>
int main()
{
	int arr[] = {10, 20, 30, 40};
	ft_memset(arr, 5, 12);
	for(int i = 0; i < 4; i++)
		printf("%d\n", arr[i]);
    return 0;
}

// char -127 0 127
// unsigned char 0 / 256