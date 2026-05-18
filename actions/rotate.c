/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:38:28 by emunoz            #+#    #+#             */
/*   Updated: 2024/02/28 15:42:53 by emunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*rotate_a(t_stack **stack)
{
	t_stack	*last;

	if (*stack == NULL || (*stack)->next == NULL)
		return (0);
	last = *stack;
	while (last->next != NULL)
		last = last->next;
	last->next = *stack;
	(*stack)->prev = last;
	*stack = (*stack)->next;
	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
	fix_index(stack);
	return ("ra\n");
}

char	*rotate_b(t_stack **stack)
{
	if (rotate_a(stack))
		return ("rb\n");
	return (0);
}

char	*rotate(t_stack **a, t_stack **b)
{
	if (rotate_a(a) && rotate_b(b))
		return ("rr");
	return (0);
}
