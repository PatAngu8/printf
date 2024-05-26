/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patri <patriciaangulo.g@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 16:56:40 by patri             #+#    #+#             */
/*   Updated: 2024/05/12 16:56:43 by patri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	count_s1;
	size_t	count_s2;
	size_t	count_new_s;
	char	*new_s;

	count_s1 = 0;
	count_s2 = 0;
	count_new_s = 0;
	new_s = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (new_s == NULL)
		return (NULL);
	while (s1[count_s1] != '\0')
	{
		new_s[count_new_s] = s1[count_s1];
		count_s1++;
		count_new_s++;
	}
	while (s2[count_s2] != '\0')
	{
		new_s[count_new_s + count_s2] = s2[count_s2];
		count_s2++;
	}
	new_s[count_new_s + count_s2] = '\0';
	return (new_s);
}

/*int main()
{
    char const *s1 = "where is my ";
    char const *s2 = "malloc ???";
    char *new;
    new = ft_strjoin(s1, s2);
    printf("\nY en el main es: %s", new);
}*/