/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:44:13 by tmidik            #+#    #+#             */
/*   Updated: 2024/11/02 21:54:03 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hex_length_x(unsigned long num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		len++;
		num = num / 16;
	}
	return (len);
}

static char	*ft_itohex_x(unsigned int num, int uppercase)
{
	char	*hex_str;
	char	*base;
	int		len;

	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	len = ft_hex_length_x(num);
	hex_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!hex_str)
		return (NULL);
	hex_str[len] = '\0';
	while (len--)
	{
		hex_str[len] = base[num % 16];
		num = num / 16;
	}
	return (hex_str);
}

int	ft_printf_hex(unsigned int num, int uppercase)
{
	char	*hex_str;
	int		len;

	hex_str = ft_itohex_x(num, uppercase);
	if (!hex_str)
		return (0);
	len = write(1, hex_str, ft_strlen(hex_str));
	free(hex_str);
	return (len);
}
