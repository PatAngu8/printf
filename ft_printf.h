//poner cabecera

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>
# include <string.h>

int		ft_printf(char const *format, ...);
int		ft_putchar(int a);
int		ft_putstr(char *str);
int		ft_putnbr(int n);
int		ft_putnbr_unsigned(unsigned int n);
int		ft_puthex(unsigned long long n, char c);
int		ft_putptr(uintptr_t ptr);
#endif