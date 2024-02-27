/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:32:02 by ngastana          #+#    #+#             */
/*   Updated: 2024/02/27 19:43:15 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	move_to_b_r(t_stack *stack, t_move *move)
{
	int		num_b;
	int		rr;

	num_b = position_b(stack, move);
	rr = abs(move->position - num_b);
	move->position = move->position - rr;
	num_b = num_b - rr;
	while (rr > 0)
	{
		rotate(stack->a, stack->a_size, "up", ' ');
		rotate(stack->b, stack->b_size, "up", ' ');
		write (1, "\n", 1);
		rr--;
	}
	while (move->position > 0)
	{
		rotate(stack->a, stack->a_size, "up", 'a');
		move->position--;
	}
	while (num_b > 0)
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
	move->position = move->position - rrr;
	num_b = num_b - rrr;
	while (rrr > 0)
	{
		rotate(stack->a, stack->a_size, "down", ' ');
		rotate(stack->b, stack->b_size, "down", 'r');
		rrr--;
	}
	while (move->position > 0)
	{
		rotate(stack->a, stack->a_size, "down", 'a');
		move->position--;
	}
	while (num_b > 0)
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
	while (move->position > 0)
	{
		rotate(stack->a, stack->a_size, "up", 'a');
		move->position--;
	}
	while (num_b > 0)
	{
		rotate(stack->b, stack->b_size, "down", 'b');
		num_b--;
	}
	push("pb", stack);
}

static void	move_to_b_rbrr(t_stack *stack, t_move *move)
{
	int		num_b;

	num_b = position_b(stack, move);
	while (move->position > 0)
	{
		rotate(stack->a, stack->a_size, "down", 'a');
		move->position--;
	}
	while (num_b > 0)
	{
		rotate(stack->b, stack->b_size, "up", 'b');
		num_b--;
	}
	push("pb", stack);
}

void	move_to_b(t_stack *stack, t_move *move)
{
	rotate_move(stack, move);
	rrotate_move(stack, move);
	rarrbrotate_move(stack, move);
	rbrrarotate_move(stack, move);
	count_move(stack, move);
	best_num_to_b(stack, move);
	if (move->rmove[move->position] == move->num_move[move->position])
		move_to_b_r(stack, move);
	else if (move->rrmove[move->position] == move->num_move[move->position])
		move_to_b_rr(stack, move);
	else if (move->rarrbmove[move->position] == move->num_move[move->position])
		move_to_b_rarr(stack, move);
	else if (move->rbrramove[move->position] == move->num_move[move->position])
		move_to_b_rbrr(stack, move);
}
