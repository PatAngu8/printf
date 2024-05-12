/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@estudiante.42.es>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:58:53 by paangulo          #+#    #+#             */
/*   Updated: 2024/04/26 18:58:55 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while (*s1 != '\0' && *s1 == *s2 && n > 0)
    {
        s1++;
        s2++;
        n--;
    }
    if (n == 0)
        return (0);
    return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
/*int main()
{
    char s1[] = "the cake is a lie !\0I’m hidden lol\r\n";
    //char s1[] = "test\200";
    char s2[] = "there is no stars in the sky";
    //char s2[] = "test\0";
    size_t n = strlen("the cake is a lie !\0I’m hidden lol\r\n");
    //size_t n = 6;
    int resul;
    int resul2;
    resul = ft_strncmp(s1, s2, n);
    resul2 = strncmp(s1, s2, n);
    printf ("\n%d", resul);
    printf ("\n%d", resul2);
    printf ("\nn vale %zu", n);
}*/