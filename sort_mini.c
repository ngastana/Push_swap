/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 08:50:11 by ngastana          #+#    #+#             */
/*   Updated: 2024/02/21 10:49:55 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rank_three(t_stack *stack)
{
	if (stack->a_size == 3 && verify_order(stack->a, stack->a_size) == 1)
	{
		if (stack->a[1] > stack->a[2] && stack->a[0] > stack->a[1])
		{
			swap("sa", stack->a, stack->a_size);
			rotate (stack->a, stack->a_size, "down", 'a');
			return ;
		}
		if (stack->a[1] > stack->a[2])
			rotate (stack->a, stack->a_size, "down", 'a');
	}
	if (stack->a_size == 3 || stack->a_size == 2)
	{
		while (stack->a[0] > stack->a[1])
			swap("sa", stack->a, stack->a_size);
	}
}

void	rank_four_five(t_stack *stack)
{
	int	i;

	i = 1;
	if (stack->a_size == 5)
		i = 2;
	if (stack->a_size == 5 || stack->a_size == 4)
	{
		while (stack->b_size < i)
		{
			if (verify_order(stack->a, stack->a_size) == 0)
				return ;
			else if (find_smaller_place(stack->a, stack->a_size) == 0)
				push("pb", stack);
			else if (find_smaller_place(stack->a, stack->a_size) < 3)
				rotate(stack->a, stack->a_size, "up", 'a');
			else
				rotate(stack->a, stack->a_size, "down", 'a');
		}
		rank_three(stack);
		while (i != 0)
		{
			push("pa", stack);
			i--;
		}
	}
}