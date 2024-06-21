/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 16:23:03 by paangulo          #+#    #+#             */
/*   Updated: 2024/06/20 16:35:46 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(uintptr_t ptr)
{
	int	len;

	len = 0;
	if (ptr == 0)
	{
		ft_putstr("(nil)");
		return (5);
	}
	len += ft_putstr("0x");
	len += ft_puthex(ptr, 'x');
	return (len);
}
