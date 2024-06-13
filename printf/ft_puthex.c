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

void	ft_puthex(unsigned long long n, char c)
{
	if (n >= 16)
	{
		ft_puthex (n / 16, c);
	}
	if (c == 'x')
		ft_putchar("0123456789abcdef"[n % 16]);
	else if (c == 'X')
		ft_putchar("0123456789ABCDEF"[n % 16]);
}
