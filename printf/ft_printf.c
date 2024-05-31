/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 19:21:02 by paangulo          #+#    #+#             */
/*   Updated: 2024/05/31 19:52:19 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

int	ft_printf(char const *label, ...)
{
	va_list	args;
	va_list	args_copy;

	va_start(args, label);
	va_copy(args_copy, args);
}
