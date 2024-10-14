/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   (EKSİK)ft_substr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 15:52:46 by tmidik            #+#    #+#             */
/*   Updated: 2024/10/14 13:13:47 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// eksikler var.chat gpt ye hatalarını sor!

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	int i;
	char *str;
	int j;

	str = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	while (i < start)
		i++;
	while (i < (start + len))
	{
		str[j] = s[i];
		j++;
		i++;
	}
	str[j] = '\0';
	return (str);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char *s = "Hello world!";
	printf("%s", ft_substr(s, 6, 20));
}

// Hello world!

/* ÖNEMLİ NOT */

/* unsigned int türü, negatif olmayan tamsayıları temsil eder. */
/* size_t, platforma bağlı bir türdür ve C/C++ dil standartlarında bellek boyutlarını veya nesne boyutlarını ifade etmek için kullanılır. */