/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 18:04:33 by tmidik            #+#    #+#             */
/*   Updated: 2024/10/21 18:07:57 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *str, char sep)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str != '\0')
	{
		if (*str != sep && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*str == sep)
			in_word = 0;
		str++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	word_len;
	size_t	i;

	i = 0;
	words = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (ft_strchr(s, c) == NULL)
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			words[i] = ft_substr(s, 0, word_len);
			i++;
			s += word_len;
		}
	}
	words[i] = NULL;
	return (words);
}
