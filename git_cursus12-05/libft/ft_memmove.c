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

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	/*size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (0);
	if (dst > src)
	{
		i = len;
		while (i > 0)
		{
			i--;
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);*/

	size_t  counter;
    if (!dst && !src)
       return (0);
    counter = 0;
    if (src < dst)
    {
        counter = len;
        while (counter > 0)
        {
            counter--;
            ((unsigned char *)dst)[counter] = ((unsigned char *)src)[counter];
        }
    }
    else
    {
        counter = 0;
        while (counter < len)
        {
            ((unsigned char *)dst)[counter] = ((unsigned char *)src)[counter];
            counter++;
        }
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