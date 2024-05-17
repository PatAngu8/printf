/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@estudiante.42.es>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:05:13 by paangulo          #+#    #+#             */
/*   Updated: 2024/05/17 14:05:15 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countdigits(int num)
{
	if (num == -2147483648)
		return (11);
	else if (num < 0)
		return (ft_countdigits(num * (-1)) + 1);
	else if (num < 10)
		return (1);
	else
		return (ft_countdigits(num / 10) + 1);
}

static void	ft_writestr(char *str, int size, long int n)
{
	str[size] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
		while (size > 1)
		{
			str[size - 1] = n % 10 + '0';
			n = n / 10;
			size--;
		}
	}
	else
	{
		while (size > 0)
		{
			str[size - 1] = n % 10 + '0';
			n = n / 10;
			size--;
		}
	}
}

char	*ft_itoa(int n)
{
	long int	num;
	int			size;
	char		*str;	

	size = ft_countdigits(n);
	str = (char *)ft_calloc(size + 1, sizeof(char));
	if (!str)
		return (NULL);
	num = (long int)n;
	ft_writestr(str, size, num);
	return (str);
}