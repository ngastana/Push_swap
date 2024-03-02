/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 09:24:20 by ngastana          #+#    #+#             */
/*   Updated: 2024/03/02 09:38:18 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	move_r(t_stack *stack, int i)
{
	int	j;

	j = 0;
	while (j < stack->table[i][1])
	{
		rotate(stack->a, stack->a_size, "up", ' ');
		rotate(stack->b, stack->b_size, "up", ' ');
		write (1, "\n", 1);
		j++;
	}
	j = 0;
	while (j < stack->table[i][2])
	{
		rotate(stack->a, stack->a_size, "up", 'a');
		j++;
	}
	j = 0;
	while (j < stack->table[i][3])
	{
		rotate(stack->b, stack->b_size, "up", 'b');
		j++;
	}
	push("pb", stack);
}

static void	move_rr(t_stack *stack, int i)
{
	int	j;

	j = 0;
	while (j < stack->table[i][4])
	{
		rotate(stack->a, stack->a_size, "down", ' ');
		rotate(stack->b, stack->b_size, "down ", ' ');
		write (1, "\n", 1);
		j++;
	}
	j = 0;
	while (j < stack->table[i][5])
	{
		rotate(stack->a, stack->a_size, "down", 'a');
		j++;
	}
	j = 0;
	while (j < stack->table[i][6])
	{
		rotate(stack->b, stack->b_size, "down", 'b');
		j++;
	}
	push("pb", stack);
}

static void	move_rarrb(t_stack *stack, int i)
{
	int	j;

	j = 0;
	while (j < stack->table[i][7])
	{
		rotate(stack->a, stack->a_size, "up", 'a');
		j++;
	}
	j = 0;
	while (j < stack->table[i][8])
	{
		rotate(stack->b, stack->b_size, "down", 'b');
		j++;
	}
	push("pb", stack);
}

static void	move_rbrra(t_stack *stack, int i)
{
	int	j;

	j = 0;
	while (j < stack->table[i][9])
	{
		rotate(stack->a, stack->a_size, "down", 'a');
		j++;
	}
	j = 0;
	while (j < stack->table[i][10])
	{
		rotate(stack->b, stack->b_size, "up", 'b');
		j++;
	}
	push("pb", stack);
}

void	move(t_stack *stack, int i)
{
	if (stack->table[i][11] == 1)
		move_r(stack, i);
	else if (stack->table[i][11] == 2)
		move_rr(stack, i);
	else if (stack->table[i][11] == 3)
		move_rarrb(stack, i);
	else if (stack->table[i][11] == 4)
		move_rbrra(stack, i);
}
