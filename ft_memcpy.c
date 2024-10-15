/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:03:10 by tmidik            #+#    #+#             */
/*   Updated: 2024/10/14 18:52:25 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	if (!dst || !src)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n--)
	{
		*d++ = *s++;	
	}
	return (dst);
}

#include <stdio.h>

int main()
{
	int dst[7];
	int src[3] = {-10, 20, 0};
	ft_memcpy(dst, src, 16);
	printf("%i\n", src[2]);
	printf("%i,%i,%i,%i,%i,%i", dst[0],dst[1],dst[2],dst[3],dst[4],dst[5]);
}