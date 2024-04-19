/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@estudiante.42.es>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:09:22 by paangulo          #+#    #+#             */
/*   Updated: 2024/04/15 16:29:04 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	i;
	size_t	j;

	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	i = lendst;
	j = 0;
	if (dstsize <= lendst)
	{
		return (dstsize + lensrc);
	}
	while (src[j] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i + j] = '\0';
	return (lendst + lensrc);
}

/*int main()
{
	char dest[] = "Hello";
	const char src[] = " world";
	size_t dstsize = 9;
	size_t result = ft_strlcat(dest, src, dstsize);
	printf("%zu", result);
	printf("\n%s", dest);
	return 0;
}*/