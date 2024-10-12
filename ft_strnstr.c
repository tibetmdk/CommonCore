/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 13:22:37 by tmidik            #+#    #+#             */
/*   Updated: 2024/10/12 14:29:15 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return (char *)&haystack[i];
			j++; 
		}
		i++;
	}
	return NULL;
}
#include <stdio.h>
#include <string.h>
int main()
{
	char *haystack = "merhaba benim adim tibet seninki ne";
	char *needle = "adim";
	printf("%s\n", ft_strnstr(haystack, needle, 20));
	printf("%s", strnstr(haystack, needle, 20));
}