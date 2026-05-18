/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:29:02 by emunoz            #+#    #+#             */
/*   Updated: 2024/02/21 12:35:42 by emunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	print_stack(t_stack **a, t_stack **b)
{
	t_stack	*print_a;
	t_stack	*print_b;

	print_a = *a;
	print_b = *b;
	ft_printf("stack a\n");
	while (print_a != NULL)
	{
		ft_printf("num: %d, index: %d\n", print_a->num, print_a->index);
		print_a = print_a->next;
	}
	ft_printf("stack b\n");
	while (print_b != NULL)
	{
		ft_printf("num: %d, index: %d\n", print_b->num, print_b->index);
		print_b = print_b->next;
	}
}
