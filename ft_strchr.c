/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 21:10:28 by tmidik            #+#    #+#             */
/*   Updated: 2024/10/11 21:51:05 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int i = 0;
	if (c == '\0')
		return ((char *)&s[i]);
		
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return(0);
}

#include <stdio.h>
int main()
{
	char *name = "sapık";
	printf("%s", ft_strchr(name, 's'));
}