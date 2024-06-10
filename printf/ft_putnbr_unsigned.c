//poner cabecera

#include "libftprintf.h"

void	ft_putnbr_unsigned (unsigned int n)
{
	if (n >= 10)
		ft_putnbr_unsigned (n / 10);
	ft_putchar (n % 10 + '0');
}

