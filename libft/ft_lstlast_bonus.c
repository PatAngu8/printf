/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patri <patriciaangulo.g@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 00:15:13 by patri             #+#    #+#             */
/*   Updated: 2024/05/22 00:15:16 by patri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> 
#include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL); 
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

/*// Función para crear un nuevo nodo de la lista
t_list	*create_node(void *content)
{
	t_list *new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

// Función principal para probar ft_lstlast
int main()
{
	// Crear algunos nodos
	t_list *node1 = create_node("Node 1");
	t_list *node2 = create_node("Node 2");
	t_list *node3 = create_node("Node 3");

	// Enlazar los nodos
	node1->next = node2;
	node2->next = node3;

	// Obtener el último nodo
	t_list *last = ft_lstlast(node1);

	// Imprimir el contenido del último nodo
	if (last)
		printf("Last node content: %s\n", (char *)last->content);
	else
		printf("The list is empty.\n");

	// Liberar la memoria asignada
	free(node1);
	free(node2);
	free(node3);

	return 0;
}*/