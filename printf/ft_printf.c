/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 19:21:02 by paangulo          #+#    #+#             */
/*   Updated: 2024/06/04 16:53:04 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

void	check_type(char a)
{
	if ((a == 'c') || (a == '%'))
		ft_putchar(a);
	else if (a == 's')
		ft_putstr(a);
	else if ((a == 'd') || (a == 'i'))
		ft_putnbr(a);
	else if (a == 'u')
		ft_putnbr_unsigned(a);
	else if (a == 'p')
		ft_putptr(a);
	else if (a == 'x')
		ft_put_hex_upper(a);
	else if (a == "X")
		ft_put_hex_lower(a);		
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
			check_type(*format);
		}		
	}	
}
