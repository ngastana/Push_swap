/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_mini.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 08:50:11 by ngastana          #+#    #+#             */
/*   Updated: 2024/02/27 18:39:46 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rank_three_a(int *stack, int size)
{
	if (size == 3 && verify_order(stack, size) == 1)
	{
		if (stack[1] > stack[2] && stack[0] > stack[1])
		{
			swap("sa", stack, size);
			rotate (stack, size, "down", 'a');
			return ;
		}
		if (stack[1] > stack[2])
			rotate (stack, size, "down", 'a');
	}
	if (size == 3 || size == 2)
	{
		while (stack[0] > stack[1])
			swap("sa", stack, size);
	}
}

void	rank_three_b(int *stack, int size)
{
	if (size == 3 && verify_order(stack, size) == 1)
	{
		if (stack[1] < stack[2] && stack[0] < stack[1])
		{
			rotate (stack, size, "down", 'b');
			rotate (stack, size, "down", 'b');
			return ;
		}
		if (stack[1] < stack[2])
			rotate (stack, size, "down", 'b');
	}
	if (size == 3 || size == 2)
	{
		while (stack[0] < stack[1])
			swap("sa", stack, size);
	}
}

void	rank_four_five(t_stack *stack)
{
	int	i;

	i = 1;
	if (stack->a_size == 5)
		i = 2;
	if ((stack->a_size == 5 || stack->a_size == 4))
	{
		while (stack->b_size != i && verify_order(stack->a, stack->a_size) == 1)
		{
			if (f_s_place(stack->a, stack->a_size) == 0)
				push("pb", stack);
			else if (f_s_place(stack->a, stack->a_size) < 3)
				rotate(stack->a, stack->a_size, "up", 'a');
			else
				rotate(stack->a, stack->a_size, "down", 'a');
		}
		rank_three_a(stack->a, stack->a_size);
		while (i != 0)
		{
			push("pa", stack);
			i--;
		}
		free_exit(stack, "");
	}
}
