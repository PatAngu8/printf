/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@estudiante.42.es>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:35:15 by paangulo          #+#    #+#             */
/*   Updated: 2024/04/12 19:24:46 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		while (src[i] != '\0')
			i++;
		return (i);
	}
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (i < dstsize)
		dst[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

/*int main()
{
	char dest[5];
	const char src[] = "";
	size_t destsize = 2;
	size_t len;
	size_t len2;
	len = ft_strlcpy(dest, src, destsize);
	printf("%zu\n", len);
	printf("%s\n", dest);

	len2 = strlcpy(dest, src, destsize);
	printf("%zu\n", len2);
	printf("%s\n", dest);
	return 0;
}*/