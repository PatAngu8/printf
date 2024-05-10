/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@estudiante.42.es>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:00:49 by paangulo          #+#    #+#             */
/*   Updated: 2024/04/30 11:00:51 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    s = (char *)s;
    c = (char)c;

    while (n > 0)
    {
        if (*(unsigned char *)s == (unsigned char)c)
        {
            return ((void *)s);		
        }        
        s++;
        n--;
    }
    return NULL;
}
/*int main()
{
    char s[] = "hola que pasa";
    int c = 'o';
    size_t n = strlen(s);
    char *ptr = ft_memchr(s, c, n);
    printf("\n%c", *ptr);
}*/
