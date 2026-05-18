/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:21:54 by emunoz            #+#    #+#             */
/*   Updated: 2024/02/28 15:11:12 by emunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	create_stack(t_stack **a, int *array, int size)
{
	t_stack	*current;
	t_stack	*node;
	int		i;

	current = *a;
	i = 0;
	while (current != NULL && current->next != NULL)
	{
		current = current->next;
	}
	while (i < size)
	{
		node = malloc(sizeof(t_stack));
		node->num = array[i];
		node->index = i;
		node->prev = current;
		node->next = NULL;
		if (current != NULL)
			current->next = node;
		else
			*a = node;
		current = node;
		i++;
	}
}
