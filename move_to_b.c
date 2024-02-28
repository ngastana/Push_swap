/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:32:02 by ngastana          #+#    #+#             */
/*   Updated: 2024/02/28 14:05:17 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	move_to_b_r(t_stack *stack, t_move *move)
{
	int		num_b;
	int		rr;

	num_b = position_b(stack, move);
	rr = 0;
	while (rr < num_b && rr < move->position)
	{
		rotate(stack->a, stack->a_size, "up", ' ');
		rotate(stack->b, stack->b_size, "up", ' ');
		write (1, "\n", 1);
		rr++;
	}
	while (move->position - rr > 0)
	{
		rotate(stack->a, stack->a_size, "up", 'a');
		move->position--;
	}
	while (num_b - rr > 0)
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
	rrr = 0;
	while (rrr < num_b && rrr < move->position)
	{
		rotate(stack->a, stack->a_size, "down", ' ');
		rotate(stack->b, stack->b_size, "down ", ' ');
		write (1, "\n", 1);
		rrr++;
	}
	while (move->position - rrr > 0)
	{
		rotate(stack->a, stack->a_size, "down", 'a');
		move->position--;
	}
	printf("move-position-a: %i", move->position);
	printf("num_b: %i", num_b);
	while (num_b - rrr > 0)
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
	printf("rmove: %i\n", move->rmove[0]);
	rrotate_move(stack, move);
	printf("rrmove: %i\n", move->rrmove[0]);
	rarrbrotate_move(stack, move);
	printf("rarrbmove: %i\n", move->rarrbmove[0]);
	rbrrarotate_move(stack, move);
	printf("rbrramove: %i\n", move->rbrramove[0]);
	count_move(stack, move);
	printf("menor num: %i\n", move->num_move[0]);
	best_num_to_b(stack, move);
	printf("posicion que se mueve de a: %i\n", move->position);
	if (move->rmove[move->position] == move->num_move[move->position])
	{
		move_to_b_r(stack, move);
		printf("RMOVE\n");
	}
	else if (move->rrmove[move->position] == move->num_move[move->position])
	{
		move_to_b_rr(stack, move);
		printf("RRMOVE\n");
	}
	else if (move->rarrbmove[move->position] == move->num_move[move->position])
	{
		move_to_b_rarr(stack, move);
		printf("RARRBMOVE\n");
	}
	else if (move->rbrramove[move->position] == move->num_move[move->position])
	{
		move_to_b_rbrr(stack, move);
		printf("RBRRAMOVE\n");
	}
}
