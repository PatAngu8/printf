/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@estudiante.42.es>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:23:48 by paangulo          #+#    #+#             */
/*   Updated: 2024/04/11 12:56:12 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	int		i;
	size_t	total;

	i = 0;
	total = 0;
	while (s[i] != '\0')
	{
		total += 1;
		i++;
	}
	return (total);
}

/*int main()
{
	char *s = "holaaaa";
	size_t total;
	total = ft_strlen (s);
	printf("%zu", total);
	return 0;
}	*/