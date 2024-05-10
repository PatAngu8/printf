/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@estudiante.42.es>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:58:39 by paangulo          #+#    #+#             */
/*   Updated: 2024/05/09 16:58:42 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *subs;
    size_t count_s;
    size_t count_subs;
    size_t mem;
    //size_t end_subs;
    //size_t ini_subs;
    size_t len_s;
    size_t dif;


    count_s = 0;
    count_subs = 0;
    //s[start] = subs[0];
    //end_subs = len - 1;
    //ini_subs = (size_t)start;
    len_s = ft_strlen(s);
    dif = len_s - start;

    

    if (s == NULL)
        return (NULL);

    if (start >= len_s)
        return (NULL);

    if (dif < len)
        //len = ini_subs + dif;
        len = len_s - start;

    mem = (len + 1) * sizeof(char);
    subs = malloc(mem);

    if (subs == NULL)
        return (NULL);

    

    while (count_s < len)  
    {
        subs[count_subs] = s[start + count_subs];
        count_subs++;         
    }
    
    subs[len] = '\0';
    return (subs);
    free(subs);
}

int main()
{
    char const *s = "patricia";
    unsigned int start = 3;
    size_t len = 4;

    char *subs = ft_substr(s, start, len);
    printf("%s", subs);
}
