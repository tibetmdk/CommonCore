/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 23:05:25 by tmidik            #+#    #+#             */
/*   Updated: 2024/11/02 21:57:01 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_int(int num)
{
	char	*num_str;
	int		len;

	len  = 0;
	num_str = ft_itoa(num);
	len += write(1, num_str, ft_strlen(num_str));
	free(num_str);
	return (len);
}
