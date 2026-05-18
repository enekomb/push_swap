/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:43:36 by emunoz            #+#    #+#             */
/*   Updated: 2024/02/21 14:39:14 by emunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	is_sorted(t_stack **a)
{
	t_stack	*current;

	current = *a;
	while (current && current->next)
	{
		if (current->num > current->next->num)
			return (1);
		current = current->next;
	}
	return (0);
}
