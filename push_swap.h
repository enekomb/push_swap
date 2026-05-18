/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emunoz <emunoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 17:34:33 by emunoz            #+#    #+#             */
/*   Updated: 2024/02/28 15:42:24 by emunoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "printf/printflib.h"

typedef struct s_stack
{
	int				num;
	int				index;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

//utils
int		ft_atoi(const char *str);
int		ft_putstr_fd(char *s, int fd);
int		get_distance(t_stack *a, int target);
int		get_min(t_stack *a);
int		get_size(t_stack *stack);
void	fix_index(t_stack **head);

//free
void	free_stack(t_stack *stack);

//core
void	push_swap(int size, int *nums);
void	create_stack(t_stack **stack, int *array, int size);
void	print_stack(t_stack **stack, t_stack **b);
int		*check_args(int size, char *argv[]);
int		is_sorted(t_stack **stack);

//actions
char	*push_a(t_stack **src, t_stack **dst);
char	*push_b(t_stack **src, t_stack **dst);
char	*reverse_a(t_stack **stack);
char	*reverse_b(t_stack **stack);
char	*reverse_rotate(t_stack **a, t_stack **b);
char	*rotate_a(t_stack **stack);
char	*rotate_b(t_stack **stack);
char	*rotate(t_stack **a, t_stack **b);
char	*swap_a(t_stack **stack);
char	*swap_b(t_stack **stack);
char	*swap(t_stack **a, t_stack **b);

//algorithim
void	sort_two(t_stack **a);
void	sort_three(t_stack **a);
void	sort_four(t_stack **a, t_stack **b);
void	sort_five(t_stack **a, t_stack **b);
void	quick_sort(int arr[], int low, int high);
void	chunk_sort(t_stack **a, t_stack **b, int *nums);

#endif