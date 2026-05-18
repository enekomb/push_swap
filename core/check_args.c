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

static int	is_valid_int(const char *str)
{
	long	n;
	int		i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	n = 0;
	i = (str[0] == '+' || str[0] == '-') ? 1 : 0;
	while (str[i])
	{
		if (str[0] == '-')
			n = n * 10 - (str[i++] - '0');
		else
			n = n * 10 + (str[i++] - '0');
		if (n > INT_MAX || n < INT_MIN)
			return (0);
	}
	return (1);
}

int	*check_args(int size, char *argv[])
{
	int	i;
	int	j;
	int	k;
	int	*nums;

	i = 1;
	j = 0;
	nums = malloc(sizeof(int) * size);
	if (!nums)
		exit(ft_putstr_fd("Error\n", STDERR_FILENO));
	while (i < size)
	{
		if (!is_valid_int(argv[i]))
		{
			free(nums);
			exit(ft_putstr_fd("Error\n", STDERR_FILENO));
		}
		nums[j++] = ft_atoi(argv[i++]);
	}
	i = 0;
	while (i < j)
	{
		k = i + 1;
		while (k < j)
		{
			if (nums[i] == nums[k])
			{
				free(nums);
				exit(ft_putstr_fd("Error\n", STDERR_FILENO));
			}
			k++;
		}
		i++;
	}
	return (nums);
}
