/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:36:13 by paangulo          #+#    #+#             */
/*   Updated: 2024/06/11 13:36:17 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_unsigned (unsigned int n)
{
	if (n >= 10)
		ft_putnbr_unsigned (n / 10);
	ft_putchar (n % 10 + '0');
}

