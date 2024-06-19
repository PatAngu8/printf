//poner cabecera

#include "ft_printf.h"

int	ft_putchar(int a)
{
	return (write (1, &a, 1));
}

