/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patri <patriciaangulo.g@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 17:43:08 by patri             #+#    #+#             */
/*   Updated: 2024/05/14 17:43:11 by patri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	count_s1;
	size_t	len_s1;
	char	*new_s;

    count_s1 = 0;
    len_s1 = ft_strlen(s1);
	new_s = 0;
	if (s1 != 0 && set != 0)
	{		
		while (s1[count_s1] && ft_strchr(set, s1[count_s1]))
			count_s1++;
		while (s1[len_s1 - 1] && ft_strchr(set, s1[len_s1 - 1]) && len_s1 > count_s1)
			len_s1--;
		new_s = (char *)malloc(sizeof(char) * (len_s1 - count_s1 + 1));
		if (new_s != NULL)
			ft_strlcpy(new_s, &s1[count_s1], len_s1 - count_s1 + 1);
    }

    /*else if (s1 == 0)
    {
        new_s = (char *)malloc(1);
        if (new_s != NULL)
            new_s[0] = '\0';
        
        return (new_s);
    }*/
    
	return (new_s);
}
/*int main()
{
    char const *s1 = "cadaena";
    char const *set = "ca";
    char *new_s = ft_strtrim(s1, set);
    printf("%s", new_s);
}*/