//poner cabecera

#include "ft_printf.h"

static void	ft_putn(int n)
{
	if (n == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	else
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10 + '0');
	}
}

static int	ft_countdigits(long int n)
{
	int	i;

	i = 0;
	while (n >= 10)
	{
		i++;
		n /= 10;
	}
	return (i + 1);
}

int	ft_putnbr(int n)
{
	long int	pos;

	pos = 0;
	ft_putn(n);
	if (n >= 0)
		return (ft_countdigits(n));
	pos = (long int)n * (-1);
	return (ft_countdigits(pos) + 1);
}
