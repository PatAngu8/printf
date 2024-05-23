/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patri <patriciaangulo.g@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:04:30 by patri             #+#    #+#             */
/*   Updated: 2024/05/23 12:04:34 by patri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*ptr;
	t_list	*next_node;

	if (lst == NULL || *lst == NULL)
		return ;
	ptr = *lst;
	while (ptr != NULL)
	{
		next_node = ptr->next;
		if (del != NULL)
			del(ptr->content);
		free(ptr);
		ptr = next_node;
	}
	*lst = NULL;
}
