/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@estudiante.42.es>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:10:17 by paangulo          #+#    #+#             */
/*   Updated: 2024/04/11 15:42:02 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	s = NULL;
	s = (unsigned char *)src;
	d = NULL;
	d = (unsigned char *)dest;
	i = 0;
	if (dest == NULL && src == NULL)
		return (dest);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*int main()
{
	char source[] = "patri";
	char destiny[] = "aeiou";
	ft_memcpy(destiny, source, 3);
   	printf("%s", destiny);

//	memcpy(destiny, source, 3);
//	printf("\n%s", destiny);
	return 0;
}	*/