/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patri <patriciaangulo.g@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 18:02:01 by patri             #+#    #+#             */
/*   Updated: 2024/05/20 18:45:05 by patri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int	ft_lstsize(t_list *lst)
{
	int			i;
	t_list	*ptr;

	i = 0;
	ptr = lst;
	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}