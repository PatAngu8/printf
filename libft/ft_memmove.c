/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@estudiante.42.es>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 17:50:02 by paangulo          #+#    #+#             */
/*   Updated: 2024/04/15 16:50:59 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	s = NULL;
	s = (const unsigned char *)src;
	d = NULL;
	d = (unsigned char *)dst;
	i = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/*int main()
{
	char source[] = "patri";
	char destiny[] = "aeiou";
	ft_memmove (destiny, source, 2);
   	printf ("%s", destiny);
	return 0;
}*/