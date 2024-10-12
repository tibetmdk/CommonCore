/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:54:15 by tmidik            #+#    #+#             */
/*   Updated: 2024/10/11 19:32:18 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char* dst, const char* src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0' && (j + i + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

#include <stdio.h>
int main()
{
	char dst[20] = "berk";
	const char src[] = "tibet";

	ft_strlcat(dst, src, 3);
	printf("%s\n%s", dst, src);
}