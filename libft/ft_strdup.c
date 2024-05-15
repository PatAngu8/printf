/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paangulo <paangulo@estudiante.42.es>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:00:23 by paangulo          #+#    #+#             */
/*   Updated: 2024/05/08 13:00:26 by paangulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	count_s1;
	size_t	count_copy;
	size_t	length_s1;
	size_t	mem;

	count_s1 = 0;
	count_copy = 0;
	length_s1 = ft_strlen(s1);
	mem = (length_s1 + 1) * sizeof(char);
	if (s1 == NULL)
		return (NULL);
	copy = (char *)malloc(mem);

	if (copy == NULL)
		return (NULL);
	while (s1[count_s1] != '\0')
    {
		copy[count_copy] = s1[count_s1];
		count_copy++;
		count_s1++;
    }
    copy[count_copy] = '\0';
	return(copy);
}
/*int main()
{
    const char *s1 = "que pasa pepe";
    char *copy = ft_strdup (s1);
    printf("%s", copy);
}*/