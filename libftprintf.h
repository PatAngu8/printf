/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 16:28:26 by paangulo          #+#    #+#             */
/*   Updated: 2024/06/13 12:25:11 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(char const *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
void	ft_putnbr(int n);
void	ft_putnbr_unsigned(unsigned int n);
void	ft_puthex(unsigned long long n, char c);
//void	ft_putptr(char c);
#endif