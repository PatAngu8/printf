/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 19:21:02 by paangulo          #+#    #+#             */
/*   Updated: 2024/06/13 11:05:29 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "libftprintf.h"

void	ft_check_type(va_list args, char type)
{
	if (type == 'c')
		ft_putchar((char) va_arg(args, int));
	else if (type == 's')
		ft_putstr(va_arg(args, char *));
	else if ((type == 'd') || (type == 'i'))
		ft_putnbr(va_arg(args, int));
	else if (type == 'u')
		ft_putnbr_unsigned((char) va_arg(args, unsigned int));
	else if (type == 'x')
		ft_puthex(va_arg(args, unsigned int), 'x');
	else if (type == 'X')
		ft_puthex(va_arg(args, unsigned int), 'X');
}
	/*else if (type == 'p')
	ft_putptr(a);*/

int	ft_printf(char const *format, ...)
{
	va_list	args;
	va_list	args_copy;

	va_start(args, format);
	va_copy(args_copy, args);
	while (*format)
	{
		if (*format != '%')
			ft_putchar(*format);
		if (*format == '%' && *(format + 1))
		{
			format++;
			ft_check_type(args, *format);
		}
		format++;
	}
	va_end (args);
	return (0);
}
int main()
{
	unsigned int	num;

	num = 16; 
	ft_printf("hola\n %x", num);
}
