/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:36:32 by paangulo          #+#    #+#             */
/*   Updated: 2024/06/16 22:06:55 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *str);

int	ft_putstr(char *str)
{
	int	i;

	if (!str)
		str = "(null)";
	i = ft_strlen(str);
	return (write(1, str, i));
}
