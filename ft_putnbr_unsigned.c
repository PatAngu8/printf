//poner cabecera

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
		i += ft_putnbr_unsigned (n / 10);
	ft_putchar (n % 10 + '0');
	i++;
	return (i);
}

