/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 22:12:35 by tmidik            #+#    #+#             */
/*   Updated: 2024/10/11 23:22:00 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i = 0;
	char *chr = NULL;
		
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			chr = (char *)&s[i];
		i++;
	}
	if (c == '\0')
		return (char *)&s[i];
	return (chr);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char *name = "menemen";
	char *result = ft_strrchr(name, '\0');
	printf("%s\n", strrchr(name, '\0'));
	printf("%s\n", result);
}