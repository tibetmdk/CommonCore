/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 22:35:29 by tmidik            #+#    #+#             */
/*   Updated: 2024/10/22 23:36:43 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*new;

	if (!set || !s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	if (end == 0)
		return (ft_strdup(""));
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (s1[end] && ft_strchr(set, s1[end]))
		end--;
	if (start > end)
		return (ft_strdup(""));
	new = ft_substr(s1, start, end - start + 1);
	return (new);
}
