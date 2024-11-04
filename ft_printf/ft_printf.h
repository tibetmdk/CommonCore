/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmidik <tibetmdk@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 21:48:36 by tmidik            #+#    #+#             */
/*   Updated: 2024/11/04 00:56:02 by tmidik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include "libft/libft.h"

int	ft_printf_chr(char c);
int	ft_printf_str(const char *str);
int	ft_printf_ptr(void *ptr);
int	ft_printf_uns(unsigned int num);
int	ft_printf_hex(unsigned int num, int uppercase);
int	ft_printf(const char *format, ...);

int	ft_printf_int(int num);


#endif 