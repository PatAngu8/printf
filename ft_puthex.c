//poner cabecera

#include "ft_printf.h"

int	ft_puthex(unsigned long long n, char c)
{
	unsigned long long	i;

	i = 0;
	if (n >= 16)
		i += ft_puthex (n / 16, c);
	if (c == 'x')
		ft_putchar ("0123456789abcdef"[n % 16]);
	else if (c == 'X')
		ft_putchar ("0123456789ABCDEF"[n % 16]);
	i++;
	return (i);
}