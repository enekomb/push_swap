/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 22:35:04 by emunoz            #+#    #+#             */
/*   Updated: 2024/02/28 15:44:11 by emunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_two(t_stack **a)
{
	if ((*a)->num > (*a)->next->num)
		ft_putstr_fd(swap_a(a), 1);
	return ;
}

void	sort_three(t_stack **a)
{
	int	t[3];

	t[0] = (*a)->num;
	t[1] = (*a)->next->num;
	t[2] = (*a)->next->next->num;
	if (t[0] > t[1] && t[1] < t[2] && t[2] > t[0])
	{
		ft_putstr_fd(swap_a(a), 1);
		return ;
	}
	else if (t[0] > t[1] && t[1] > t[2] && t[2] < t[0])
	{
		ft_putstr_fd(swap_a(a), 1);
		ft_putstr_fd(reverse_a(a), 1);
		return ;
	}
	if (t[0] > t[1] && t[1] < t[2] && t[2] < t[0])
	{
		ft_putstr_fd(rotate_a(a), 1);
		return ;
	}
	if (t[0] < t[1] && t[1] > t[2] && t[2] > t[0])
	{
		ft_putstr_fd(swap_a(a), 1);
		ft_putstr_fd(rotate_a(a), 1);
		return ;
	}
	if (t[0] < t[1] && t[1] > t[2] && t[2] < t[0])
	{
		ft_putstr_fd(reverse_a(a), 1);
		return ;
	}
}

void	sort_four(t_stack **a, t_stack **b)
{
	int	distance;

	if (is_sorted(a) == 0)
		return ;
	distance = get_distance(*a, get_min(*a));
	if (distance == 1)
		ft_putstr_fd(rotate_a(a), 1);
	else if (distance == 2)
	{
		ft_putstr_fd(rotate_a(a), 1);
		ft_putstr_fd(rotate_a(a), 1);
	}
	else if (distance == 3)
		ft_putstr_fd(reverse_a(a), 1);
	if (is_sorted(a) == 0)
		return ;
	ft_putstr_fd(push_b(a, b), 1);
	sort_three(a);
	ft_putstr_fd(push_a(b, a), 1);
}

void	sort_five(t_stack **a, t_stack **b)
{
	int	distance;

	distance = get_distance(*a, get_min(*a));
	if (distance == 1)
		ft_putstr_fd(rotate_a(a), 1);
	else if (distance == 2)
	{
		ft_putstr_fd(rotate_a(a), 1);
		ft_putstr_fd(rotate_a(a), 1);
	}
	else if (distance == 3)
	{
		ft_putstr_fd(reverse_a(a), 1);
		ft_putstr_fd(reverse_a(a), 1);
	}
	else if (distance == 4)
		ft_putstr_fd(reverse_a(a), 1);
	if (is_sorted(a) == 0)
		return ;
	ft_putstr_fd(push_b(a, b), 1);
	sort_four(a, b);
	ft_putstr_fd(push_a(b, a), 1);
}
