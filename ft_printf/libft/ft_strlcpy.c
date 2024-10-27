/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:07:37 by tmidik            #+#    #+#             */
/*   Updated: 2024/10/08 18:01:52 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *destination, const char *source, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (source[i])
			i++;
		return (i);
	}
	while (i < size - 1 && source[i] != '\0')
	{
		destination[i] = source[i];
		i++;
	}
	if (i < size)
		destination[i] = '\0';
	while (source[i] != '\0')
		i++;
	return (i);
}
