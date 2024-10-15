/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:52:01 by tmidik            #+#    #+#             */
/*   Updated: 2024/10/15 14:35:34 by tmidik           ###   ########.fr       */
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

void *ft_calloc(size_t count, size_t size)
{
	void *ptr;
	
	ptr = (void *)malloc(count * size);
	if (ptr == NULL) // yer açabildikmi diye bir kontrol
        return NULL;
	ft_memset(ptr, 0, size * count);// ChatGPT ye göre size * count yaz ptr yerine
	return (ptr);
}

#include <stdio.h>

int main()
{
	char *arr = (char *)ft_calloc(5, sizeof(char));
	int i = 5;
	while (i--)
	{
		printf("%i", arr[i]);	
	}
	
}