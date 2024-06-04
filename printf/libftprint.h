/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprint.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:28:26 by paangulo          #+#    #+#             */
/*   Updated: 2024/06/04 16:33:48 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(char const *format, ...);
void	ft_putchar(char c);
void	ft_putstr(char *s);
void	ft_putnbr(int n);
void	ft_putptr(char c);
void	ft_putnbr_unsigned(int n);
void	ft_put_hex_upper(char c);
void	ft_put_hex_lower(char c);

#endif
