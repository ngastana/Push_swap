/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:32:02 by ngastana          #+#    #+#             */
/*   Updated: 2024/02/22 20:05:46 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	move_to_b_r(t_stack *stack, t_move *move)
{
	int		num_b;
	int		rr;

	num_b = position_b(stack, move);
	rr = abs(move->position - num_b);
	while (rr != 0)
	{
		rotate(stack->a, stack->a_size, "up", ' ');
		rotate(stack->a, stack->a_size, "up", ' ');
		rr--;
	}
	move->position = move->position - rr;
	while (move->position != 0)
	{
		rotate(stack->a, stack->a_size, "up", 'a');
		move->position--;
	}
	num_b = num_b - rr;
	while (num_b != 0)
	{
		rotate(stack->b, stack->b_size, "up", 'b');
		num_b--;
	}
	push("pb", stack);
}

static void	move_to_b_rr(t_stack *stack, t_move *move)
{
	int		num_b;
	int		rrr;

	num_b = position_b(stack, move);
	rrr = abs(move->position - num_b);
	while (rrr != 0)
	{
		rotate(stack->a, stack->a_size, "down", 'r');
		rotate(stack->a, stack->a_size, "down", ' ');
		rrr--;
	}
	move->position = move->position - rrr;
	while (move->position != 0)
	{
		rotate(stack->a, stack->a_size, "down", 'a');
		move->position--;
	}
	num_b = num_b - rrr;
	while (num_b != 0)
	{
		rotate(stack->b, stack->b_size, "down", 'b');
		num_b--;
	}
	push("pb", stack);
}

static void	move_to_b_rarr(t_stack *stack, t_move *move)
{
	int		num_b;

	num_b = position_b(stack, move);
	while (move->position != 0)
	{
		rotate(stack->a, stack->a_size, "up", 'r');
		move->position--;
	}
	while (num_b != 0)
	{
		rotate(stack->b, stack->b_size, "down", 'r');
		num_b--;
	}
	push("pb", stack);
}

static void	move_to_b_rbrr(t_stack *stack, t_move *move)
{
	int		num_b;

	num_b = position_b(stack, move);
	while (move->position != 0)
	{
		rotate(stack->a, stack->a_size, "down", 'a');
		move->position--;
	}
	while (num_b != 0)
	{
		rotate(stack->b, stack->b_size, "up", 'b');
		num_b--;
	}
	push("pb", stack);
}

void	move_to_b(t_stack *stack, t_move *move)
{
	if (move->rmove[move->position] == move->num_move[move->position])
		move_to_b_r(stack, move);
	else if (move->rrmove[move->position] == move->num_move[move->position])
		move_to_b_rr(stack, move);
	else if (move->rarrbmove[move->position] == move->num_move[move->position])
		move_to_b_rarr(stack, move);
	else if (move->rbrramove[move->position] == move->num_move[move->position])
		move_to_b_rbrr(stack, move);
	while (stack->b_size != 0)
		push("pa", stack);
	free_move(move);
}
