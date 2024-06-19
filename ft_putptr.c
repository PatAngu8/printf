//poner cabecera

#include "ft_printf.h"

int	ft_putptr(uintptr_t ptr)
{
	int	len;

	len = 0;
	len += ft_putstr("0x");
	len += ft_puthex(ptr, 'x');
	return (len);
}