/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 11:46:50 by tmidik            #+#    #+#             */
/*   Updated: 2024/10/12 12:48:19 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);

	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
        return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char *s1 = "apple";
	char *s2 = "applecot";
	int result = ft_strncmp(s1, s2, 6);
	printf("%d", result);
	printf("%d", strncmp(s1, s2, 6));
}