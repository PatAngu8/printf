/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@estudiante.42.es>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:38:20 by paangulo          #+#    #+#             */
/*   Updated: 2024/04/26 16:38:22 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int i;

    i = ft_strlen(s);
    c = (char)c;
    if (c == '\0')
        return  ((char *)&s[i]);
    while (i >= 0)
    {
        if (s[i] == c)
            return ((char *)&s[i]);    
        i--;
    }
    return (NULL);
}
/* int main()
{
    const char *s = "abbbbbbbb";
    int c = 'a';
    char *ptr = ft_strrchr(s, c);
    char *ptr2 = strrchr(s, c);
    printf ("%s\n", ptr);
    printf ("%s", ptr2);
 }*/
