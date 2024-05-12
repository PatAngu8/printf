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

char    *ft_strchr(const char *s, int c)
{
    int i;

    i = 0;
    c = (char)c;
    if (c == '\0')
        return  ((char *)&s[ft_strlen(s)]);
    while (s[i] != '\0')
    {
        if (s[i] == c)
            return ((char *)&s[i]);       
        i++;  
    }
    return  (NULL);
}

/*int main()
{
    const char *s = "hola mundo";
    int c = 109;
    char *ptr = ft_strchr(s, c);
    char *ptr2 = strchr(s, c);
    printf ("%s\n", ptr);
    printf ("%s", ptr2);
}*/
