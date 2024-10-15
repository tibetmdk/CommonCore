/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:51:32 by tmidik            #+#    #+#             */
/*   Updated: 2024/10/15 17:13:56 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strdup(const char *s1)
{
	char *buffer;
	int i;

	if (!s1)
		return (NULL);
	i = 0;
	buffer = (char *)malloc(sizeof(char) * strlen(s1) + 1);
	if (!buffer)
		return (NULL);
	while (s1[i] != '\0')
	{
		buffer[i] = s1[i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}

int main()
{
	char *str = "Hello World!";
	printf("%s", ft_strdup(str));
}