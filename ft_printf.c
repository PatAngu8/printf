//poner cabecera

#include "ft_printf.h"

static int	ft_check_format(char const *format, int i, va_list *args)
{
	if (format[i] == 'c')
		return (ft_putchar(va_arg(*args, int)));
	if (format[i] == 's')
		return (ft_putstr(va_arg(*args, char *)));
	if ((format[i] == 'd') || (format[i] == 'i'))
		return ((ft_putnbr(va_arg(*args, int))));
	if (format[i] == 'u')
		return (ft_putnbr_unsigned(va_arg(*args, unsigned int)));
	if (format[i] == 'x')
		return (ft_puthex(va_arg(*args, unsigned int), 'x'));
	if (format[i] == 'X')
		return (ft_puthex(va_arg(*args, unsigned int), 'X'));
	if (format[i] == 'p')
		return (ft_putptr(va_arg(*args, uintptr_t)));
	if (format[i] == '%')
		return (ft_putchar('%'));
	return (1);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += ft_check_format(format, i, &args);
		}
		else
			len += ft_putchar(format[i]);
		i++;
	}
	va_end (args);
	return (len);
}
/*int main()
{
	ft_printf("%c%c%c", 'a', '\t', 'b');
	
	char			*str;
	char			c;
	int 	x;
	void	 *ptr;

	c = 'a';
	str = "Comprobando ft_printf\n";
	x = 123;
	ptr = &x;
	ft_printf("El caracter es %c\n", c);
	printf("El caracter es %c\n", c);
	ft_printf("String: %s\n", str);
	printf("String: %s\n", str);
	ft_printf("Puntero: %p\n", ptr);
	printf("Puntero: %p\n", ptr);
	ft_printf("Int max: %d, Int min: %i\n", 0, -521);
	printf("Int max: %d, Int max: %i\n", 0, 521);
	ft_printf("Unsigned int: %u\n", 4294967295);
	printf("Unsigned int: %u\n", 429496729);
	ft_printf("Hexadecimal en minuscula: %x\n", 255);
	printf("Hexadecimal en minuscula:: %x\n", 255);
	ft_printf("Hexadecimal en minuscula: %X\n", 255);
}*/