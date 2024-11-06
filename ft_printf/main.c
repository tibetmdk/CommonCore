#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int a = 15234;
	ft_printf("%cx%cx%c\n", '0', 0, 1);
	printf("%cx%cx%c\n", '0', 0, 1);
}