/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patri <patriciaangulo.g@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 18:34:01 by patri             #+#    #+#             */
/*   Updated: 2024/05/05 18:34:04 by patri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	size_t	mem;
	void	*ptr;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	mem = count * size;
	ptr = malloc(mem);
	if (ptr == (void *)0)
		return ((void *)0);
	else
		ft_bzero(ptr, mem);
	return (ptr);
}
/*int main()
{
    size_t count = 0;
    size_t size = sizeof(int);
    int *ptr = ft_calloc(count, size);
    printf("%d",*ptr);
    free(ptr);
}*/
