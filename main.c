/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 12:23:41 by emunoz            #+#    #+#             */
/*   Updated: 2024/02/28 15:16:46 by emunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(int size, int *nums)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;

	create_stack(&a, nums, size);
	/* print_stack(&a, &b); */
	if (is_sorted(&a) == 0)
		return ;
	if (size == 2)
		sort_two(&a);
	if (size == 3)
		sort_three(&a);
	if (size == 4)
		sort_four(&a, &b);
	if (size == 5)
		sort_five(&a, &b);
	if (size > 5)
	{
		quick_sort(nums, 0, size - 1);
		chunk_sort(&a, &b, nums);
	}
	/* print_stack(&a, &b); */
	free_stack(a), free_stack(b), free(nums);
}

int	main(int argc, char *argv[])
{
	int	*nums;

	if (argc < 2)
		return (0);
	nums = check_args(argc, argv);
	if (argc > 2)
		push_swap((argc - 1), nums);
	else
		free(nums);
	return (0);
}
