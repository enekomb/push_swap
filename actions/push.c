/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:38:23 by emunoz            #+#    #+#             */
/*   Updated: 2024/02/28 15:34:29 by emunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*push_a(t_stack **src, t_stack **dst)
{
	t_stack	*temp;

	if (*src == NULL)
		return (0);
	temp = (*src)->next;
	if (temp)
		temp->prev = NULL;
	(*src)->next = *dst;
	if (*dst)
		(*dst)->prev = *src;
	(*src)->prev = NULL;
	*dst = *src;
	*src = temp;
	fix_index(src);
	fix_index(dst);
	return ("pa\n");
}

char	*push_b(t_stack **src, t_stack **dst)
{
	if (push_a(src, dst))
		return ("pb\n");
	return (0);
}
