/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 23:05:25 by tmidik            #+#    #+#             */
/*   Updated: 2024/10/27 23:13:49 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>
#include <string.h>

char	*ft_printf_int(int num)
{
	char	*num_str;
	int		len;

	num_str = ft_itoa(num);
	len += write(1, num_str, ft_strlen(num_str));
	free(num_str);
	return (len);
}
