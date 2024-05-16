/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@estudiante.42.es>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 15:31:21 by paangulo          #+#    #+#             */
/*   Updated: 2024/05/03 15:31:24 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	mem;
	void	*ptr;

	mem = count * size;
	ptr = malloc(mem);
	if (ptr == (void *)0)
		return ((void *)0);
	else
		ft_bzero(ptr, mem);
	return (ptr);
	free(ptr);
}

/*int main()
{
    size_t count = 0;
    size_t size = sizeof(int);
    int *ptr = ft_calloc(count, size);
    printf(“%d”,*ptr);
    free(ptr);
}*/
