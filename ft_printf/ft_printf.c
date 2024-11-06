/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:26:54 by tmidik            #+#    #+#             */
/*   Updated: 2024/11/02 22:30:51 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	choose_format(char c, va_list args)
{
	if (c == 'c')
		return (ft_printf_chr(va_arg(args, int)));
	if (c == 's')
		return (ft_printf_str(va_arg(args, char *)));
	if (c == 'd' || c == 'i')
		return (ft_printf_int(va_arg(args, int)));
	if (c == 'x')
		return (ft_printf_hex(va_arg(args, unsigned int), 0));
	if (c == 'X')
		return (ft_printf_hex(va_arg(args, unsigned int), 1));
	if (c == 'p')
		return (ft_printf_ptr(va_arg(args, void *)));
	if (c == 'u')
		return (ft_printf_uns(va_arg(args, unsigned int)));
	if (c == '%')
		return (write(1, "%", 1));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		total_len;
	int		i;

	total_len = 0;
	va_start(args, format);
	i = 0;
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
			total_len += choose_format(format[++i], args);
		else
			total_len += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (total_len);
}
