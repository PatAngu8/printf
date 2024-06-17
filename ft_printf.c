/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patri <patri@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 19:21:02 by paangulo          #+#    #+#             */
/*   Updated: 2024/06/17 02:54:13 by patri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_type(va_list args, char type)
{
	if (type == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (type == 's')
		return (ft_putstr(va_arg(args, char *)));
	if ((type == 'd') || (type == 'i'))
		return ((ft_putnbr(va_arg(args, int))));
	if (type == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
	if (type == 'x')
		return (ft_puthex(va_arg(args, unsigned int), 'x'));
	if (type == 'X')
		return (ft_puthex(va_arg(args, unsigned int), 'X'));
	if (type == 'p')
		return (ft_putptr(va_arg(args, uintptr_t)));
	if (type == '%')
		return (ft_putchar('%'));
	return (1);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		len;
	int		i;

	va_start(args, format);
	len = 0;
	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			len += ft_check_type(args, format[i + 1]);
			i++;
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
	unsigned int	num;

	num = 16;
	ft_printf("hola\n %x", num);*/
	
	/*char			*str;
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