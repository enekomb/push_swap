/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:38:30 by emunoz            #+#    #+#             */
/*   Updated: 2024/02/28 15:35:50 by emunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*swap_a(t_stack **stack)
{
	t_stack	*temp;

	if (*stack == NULL || (*stack)->next == NULL)
		return (0);
	temp = (*stack)->next;
	(*stack)->next = temp->next;
	temp->next = *stack;
	(*stack)->prev = temp;
	temp->prev = NULL;
	*stack = temp;
	fix_index(stack);
	return ("sa\n");
}

char	*swap_b(t_stack **stack)
{
	if (swap_a(stack))
		return ("sb\n");
	return (0);
}

char	*swap(t_stack **a, t_stack **b)
{
	if (swap_a(a) && swap_b(b))
		return ("ss\n");
	return (0);
}
