/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:35:59 by paangulo          #+#    #+#             */
/*   Updated: 2024/06/11 13:51:41 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthex(unsigned int n, char c)
{
	int	i;

	i = 0;
	if (n >= 16)
	{
		i += ft_puthex (n / 16, c);
	}
	if (c == 'x')
		i += ft_putchar ("0123456789abcdef"[n % 16]);
	else if (c == 'X')
		i += ft_putchar ("0123456789ABCDEF"[n % 16]);
	return (i);
}

