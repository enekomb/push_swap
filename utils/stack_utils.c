/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 10:58:58 by emunoz            #+#    #+#             */
/*   Updated: 2024/02/28 15:43:57 by emunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_min(t_stack *a)
{
	t_stack	*current;
	int		min_value;

	if (!a)
		return (INT_MAX);
	min_value = a->num;
	current = a->next;
	while (current)
	{
		if (current->num < min_value)
			min_value = current->num;
		current = current->next;
	}
	return (min_value);
}

int	get_distance(t_stack *a, int target)
{
	int		distance;
	t_stack	*current;

	distance = 0;
	current = a;
	while (current)
	{
		if (current->num == target)
			return (distance);
		current = current->next;
		distance++;
	}
	return (-1);
}

int	get_size(t_stack *stack)
{
	int		size;
	t_stack	*current;

	size = 0;
	current = stack;
	while (current)
	{
		current = current->next;
		size++;
	}
	return (size);
}

void	fix_index(t_stack **head)
{
	t_stack	*current;
	int		i;

	current = *head;
	i = 0;
	while (current != NULL)
	{
		current->index = i++;
		current = current->next;
	}
}
