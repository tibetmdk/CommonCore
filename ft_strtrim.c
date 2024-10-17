/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 22:35:29 by tmidik            #+#    #+#             */
/*   Updated: 2024/10/17 18:56:46 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set)
{
	int start;
	int end;
	
	start = 0;
	end = strlen(s1) - 1;
	
	while (s1[start] && strchr(set, s1[start]))
		start++;
	while (s1[end] && strchr(set, s1[end]))
		end--;
	if (start)
}