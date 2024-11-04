/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_uns.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:33:32 by tmidik            #+#    #+#             */
/*   Updated: 2024/11/02 22:28:29 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_utoa(unsigned int num)
{
	char			*str;
	unsigned int	temp;
	int				len;

	len = 0;
	temp = num;
	if (num == 0)
		return (ft_strdup("0"));
	while (temp != 0)
	{
		len++;
		temp /= 10;
	}
	str = (char *)malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (num != 0)
	{
		str[--len] = '0' + (num % 10);
		num /= 10;
	}
	return (str);
}

int	ft_printf_uns(unsigned int num)
{
	char	*num_str;
	int		len;

	len = 0;
	num_str = ft_utoa(num);
	if (!num_str)
		return (0);
	len += write(1, num_str, ft_strlen(num_str));
	free(num_str);
	return (len);
}
