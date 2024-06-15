/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:36:32 by paangulo          #+#    #+#             */
/*   Updated: 2024/06/13 12:20:03 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_strlen(const char *str);

int	ft_putstr(char *str)
{
	int	i;

	ft_strlen(*str);
	if (!str)
		str = NULL;
	i = ft_strlen(str);
	return (write(1, str, i));
}
