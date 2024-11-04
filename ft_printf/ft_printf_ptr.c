/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:19:43 by tmidik            #+#    #+#             */
/*   Updated: 2024/11/02 21:57:36 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hex_length(unsigned long num)
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

static char	*ft_itohex_p(unsigned long num)
{
	char	*hex_str;
	char	*base;
	int		len;

	base = "0123456789abcdef";
	len = ft_hex_length(num);
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

int	ft_printf_ptr(void *ptr)
{
	char	*hex_str;
	int		len;

	len = 0;
	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	hex_str = ft_itohex_p((unsigned long)ptr);
	if (!hex_str)
		return (0);
	len += write(1, "0x", 2);
	len += write(1, hex_str, ft_strlen(hex_str));
	free(hex_str);
	return (len);
}
