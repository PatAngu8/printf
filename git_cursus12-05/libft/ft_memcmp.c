/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@estudiante.42.es>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 11:01:30 by paangulo          #+#    #+#             */
/*   Updated: 2024/05/02 11:01:32 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{	
	while (n > 0) 
	{	
		if (*(unsigned char *)s1 != *(unsigned char *)s2)
		{
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
		}
							
		s1++;
		s2++;
		n--;
	}
		return (0);
}
/*int main() {
    char str1[] = "\xff\xaa\xde\x12";
    char str2[] = "\xff\xaa\xde\x12MACOSAAAAA";
    int resultado1 = memcmp(str1, str2, 4);
	int resultado11 = ft_memcmp(str1, str2, 4);
    if (resultado1 == 0) {
        printf("1: str1 y str2 son iguales.\n");
    } else {
        printf("1: str1 y str2 son diferentes.\n");
    }
	if (resultado11 == 0) {
        printf("11: str1 y str2 son iguales.\n");
    } else {
        printf("11: str1 y str2 son diferentes.\n");
    }
    return 0;
}*/