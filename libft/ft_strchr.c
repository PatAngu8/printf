/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@estudiante.42.es>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 15:59:27 by paangulo          #+#    #+#             */
/*   Updated: 2024/04/24 15:59:30 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
char    *strchr(const char *s, int c)
{
    int i;

    i = 0;
    c = c + 48;
    while (s[i] < ft_strlen(s)-1)
    {
        if (s[i] == c)
            return (s[i]);
        else
            return (NULL);
        i++;
    }
    return (s[i]);
}

int main()
{
    const char *s = "hola mundo";
    int c = 'm';
    printf ("%c", ft_strchr(s, c));
}
