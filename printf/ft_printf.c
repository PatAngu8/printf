/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 19:21:02 by paangulo          #+#    #+#             */
/*   Updated: 2024/06/06 16:49:02 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "ft_fundef.h"

void	check_type(va_list args, char type)
{
	char			a;
	//char			str;
	int				num;
	//unsigned int	num2;

	if (type == 'c')
	{
		a = (char) va_arg(args, int);
		ft_putchar(a);
	}
	/*else if (type == 's')
	{
		str = (char) va_arg(args, char *);
		ft_putstr(&str);
	}*/
	else if ((type == 'd') || (type == 'i'))
	{
		num = (char) va_arg(args, int);
		ft_putnbr(num);
	}
	/*else if (type == 'u')
	{
		num2 = (char) va_arg(args, int);
		ft_putnbr_unsigned(num2);
	}
	else if (type == 'p')
		ft_putptr(a);
	else if (type == 'x')
		ft_put_hex_upper(a);
	else if (type == "X")
		ft_put_hex_lower(a);*/
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	va_list	args_copy;

	va_start(args, format);
	va_copy(args_copy, args);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			check_type(args, *format);
		}
		format++;
	}	
	return	(0);
}

int main()
{
	int num;
	num = 8;
	ft_printf("hola %i", num);
}
