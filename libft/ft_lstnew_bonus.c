/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: patri <patriciaangulo.g@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 22:50:45 by patri             #+#    #+#             */
/*   Updated: 2024/05/19 23:58:04 by patri            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct s_list 
{
    void *content;
    struct s_list *next;
} t_list;

t_list *ft_lstnew(void *content)
{
	t_list *new_nodo = (t_list *)malloc(sizeof(t_list));

	if (!new_nodo)
		return (NULL);
	
	new_nodo->content = content;
	new_nodo->next = NULL;
	return new_nodo;
}

/*int main()
{
	int valor = 42; //crear contenido para el nuevo nodo
	t_list *nodo = ft_lstnew(&valor); //creamos el nuevo nodo

	if (nodo)
	{
		printf("Nodo creado con éxito!\n");
        	printf("Contenido del nodo: %d\n", *(int *)nodo->content);
    	} else {
        	printf("Error al crear el nodo.\n");
	}
	free(nodo); //liberar memoria del nodo
	return 0;
}*/
