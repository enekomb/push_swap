/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:38:25 by emunoz            #+#    #+#             */
/*   Updated: 2024/02/28 15:35:00 by emunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*reverse_a(t_stack **stack)
{
	t_stack	*last;

	if (*stack == NULL || (*stack)->next == NULL)
		return (NULL);
	last = *stack;
	while (last->next != NULL)
		last = last->next;
	last->prev->next = NULL;
	last->prev = NULL;
	last->next = *stack;
	(*stack)->prev = last;
	*stack = last;
	fix_index(stack);
	return ("rra\n");
}

char	*reverse_b(t_stack **stack)
{
	if (reverse_a(stack))
		return ("rrb\n");
	return (0);
}

char	*reverse_rotate(t_stack **a, t_stack **b)
{
	if (reverse_a(a) && reverse_b(b))
		return ("rrr");
	return (0);
}
