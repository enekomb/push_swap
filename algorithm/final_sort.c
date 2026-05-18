/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:20:46 by emunoz            #+#    #+#             */
/*   Updated: 2024/02/28 15:06:14 by emunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	chunk_sort(t_stack **a, t_stack **b, int *nums)
{
	int	size_total;
	int	size;
	int	x;
	int	distance;

	x = 0;
	size_total = get_size(*a);
	while (x < size_total)
	{
		size = get_size(*a);
		distance = get_distance(*a, nums[x]);
		if ((*a)->num <= nums[x] || (*a)->num <= nums[x + 12])
		{
			ft_putstr_fd(push_b(a, b), 1);
			x++;
		}
		else if (distance < (size / 2))
		{
			ft_putstr_fd(rotate_a(a), 1);
		}
		else if (distance >= (size / 2))
			ft_putstr_fd(reverse_a(a), 1);
	}
	x = size_total -1;
	while (x >= 0)
	{
		size = get_size(*b);
		distance = get_distance(*b, nums[x]);
		if ((*b)->num == nums[x])
		{
			ft_putstr_fd(push_a(b, a), 1);
			x--;
		}
		else if (distance < (size / 2))
		{
			ft_putstr_fd(rotate_b(b), 1);
		}
		else if (distance >= (size / 2))
			ft_putstr_fd(reverse_b(b), 1);
	}
}
