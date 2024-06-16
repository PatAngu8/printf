/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 21:44:35 by paangulo          #+#    #+#             */
/*   Updated: 2024/06/16 22:23:09 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	ft_ptrlen(uintptr_t n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

void	ft_putptrhex(uintptr_t n)
{
	if (n >= 16)
	{
		ft_putptrhex(n / 16);
		ft_putptrhex(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar_fd((n + '0'), 1);
		else
			ft_putchar_fd((n + 87), 1);
	}
}

int	ft_putptr(uintptr_t ptr)
{
	int	len;

	if (ptr == 0)
	{
		ft_putstr("(nil)");
		return (5);
	}
	len = 0;
	len += write(1, "0x", 2);
	if (ptr == 0)
		len += write(1, "0", 1) + 2;
	else
	{
		ft_putptrhex(ptr);
		len += ft_ptrlen(ptr);
	}
	return (len);
}
