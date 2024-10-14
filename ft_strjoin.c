/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 23:13:22 by tmidik            #+#    #+#             */
/*   Updated: 2024/10/14 13:43:42 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char *ft_strjoin(const char *s1, const char *s2)
{	
	char *str;
	int i;
	int j;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * ((ft_strlen(s1)) + (ft_strlen(s2)) + 1));
	if (!str)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);	
}

#include <stdio.h>

int main()
{
	char *s1 = "hellodjdjgfdhgfdhgfd";
	char *s2 = "worldhgfjhgfjhgfjhgf";
	printf("%s", ft_strjoin(s1,s2));
}