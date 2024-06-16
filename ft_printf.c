/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 19:21:02 by paangulo          #+#    #+#             */
/*   Updated: 2024/06/16 22:44:08 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_type(va_list args, char type)
{
	if (type == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (type == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if ((type == 'd') || (type == 'i'))
		return ((ft_putnbr(va_arg(args, int))));
	else if (type == 'u')
		return (ft_putnbr_unsigned(va_arg(args, unsigned int)));
	else if (type == 'x')
		return (ft_puthex(va_arg(args, unsigned int), 'x'));
	else if (type == 'X')
		return (ft_puthex(va_arg(args, unsigned int), 'X'));
	else if (type == 'p')
		return (ft_putptr(va_arg(args, uintptr_t)));
	else if (type == '%')
		return (ft_putchar('%'));
	return (1);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		len;

	va_start(args, format);
	len = 0;
	while (*format)
	{
		if (*format != '%')
			len += ft_putchar(*format);
		if (*format == '%' && *(format + 1))
		{
			len += ft_check_type(args, *format);
			format++;
		}
		format++;
	}
	va_end (args);
	return (len);
}
/*int main()
{
	unsigned int	num;

	num = 16; 
	ft_printf("hola\n %x", num);
}*/