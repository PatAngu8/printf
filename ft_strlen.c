//poner cabecera

#include "libftprintf.h"

int	ft_strlen(const char *str)
{
	int	total;
	int		i;

	total = 0;
	i = 0;
	while (str[i] != '\0')
	{
		total += 1;
		i++;
	}
	return (total);
}
