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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	count_subs;
	size_t	mem;
	size_t	dif;

	count_subs = 0;
	dif = ft_strlen(s) - start;
	if (dif < len)
		len = dif;
	mem = (len + 1) * sizeof(char);
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	subs = malloc(mem);
	if (subs == NULL)
		return (NULL);
	while (count_subs < len)
	{
		subs[count_subs] = s[start + count_subs];
		count_subs++;
	}
	subs[len] = '\0';
	return (subs);
}

/*int main()
{
    char const *s = "all of this !";
    unsigned int start = 0;
    size_t len = 13;

    char *subs = ft_substr(s, start, len);
    printf("%s", subs);
}*/
