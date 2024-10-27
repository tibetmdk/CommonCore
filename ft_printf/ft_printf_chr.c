#include "ft_printf.h"

int ft_printf_chr(char c)
{
	return (write (1, &c, 1));
}