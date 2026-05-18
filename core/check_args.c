/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:30:10 by emunoz            #+#    #+#             */
/*   Updated: 2024/02/28 15:16:34 by emunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*check_args(int size, char *argv[])
{
	int	i;
	int	j;
	int	*nums;

	i = 1;
	j = 0;
	nums = malloc(sizeof(int) * size);
	if (!nums)
		exit(ft_putstr_fd("Malloc error\n", STDERR_FILENO));
	while (i < size)
	{
		if (ft_atoi(argv[i]))
			nums[j++] = ft_atoi(argv[i++]);
		else
		{
			free(nums);
			exit(ft_putstr_fd("Non valid arguments\n", STDERR_FILENO));
		}
	}
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (nums[i] == nums[j])
			{
				exit(ft_putstr_fd("Repeated arguments\n", STDERR_FILENO));
				free(nums);
			}
			j++;
		}
		i++;
	}
	return (nums);
}
