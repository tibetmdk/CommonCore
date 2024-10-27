/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:03:21 by tmidik            #+#    #+#             */
/*   Updated: 2024/10/23 12:18:24 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	get_length(int n)
{
	int	len;

	len = 1;
	if (n > 0)
		len = 0;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		is_negative;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = get_length(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	is_negative = 0;
	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}
	while (len-- > 0)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
		if (len == 0 && is_negative)
			str[len] = '-';
	}
	return (str);
}
