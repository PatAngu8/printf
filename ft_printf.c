/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:21:05 by paangulo          #+#    #+#             */
/*   Updated: 2024/06/20 17:17:30 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
