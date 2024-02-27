/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:00:00 by ngastana          #+#    #+#             */
/*   Updated: 2024/02/27 19:04:18 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	init_move(t_stack *stack, t_move *move)
{
	move->rmove = malloc (sizeof(int) * stack->a_size);
	move->rrmove = malloc (sizeof(int) * stack->a_size);
	move->rbrramove = malloc (sizeof(int) * stack->a_size);
	move->rarrbmove = malloc (sizeof(int) * stack->a_size);
	move->num_move = malloc (sizeof(int) * stack->a_size);
	if (!(move->rmove || move->rrmove || move->rarrbmove || move->rbrramove))
		free_move(move, "Error\n");
	else if (!(move->num_move))
		free_move(move, "Error\n");
}

void	rank_whatever(t_stack *stack)
{
	t_move	*move;
	int		size;

	size = stack->a_size;
	if (is_circular(stack->a, size) && f_s_place(stack->a, size) > size / 2)
		while (verify_order(stack->a, stack->a_size) == 1)
			rotate(stack->a, stack->a_size, "down", 'a');
	if (is_circular(stack->a, size) && f_s_place(stack->a, size) < size / 2)
		while (verify_order(stack->a, stack->a_size) == 1)
			rotate(stack->a, stack->a_size, "up", 'a');
	if (verify_order(stack->a, stack->a_size) == 0)
		free_exit(stack, "");
	move = malloc(sizeof(t_move) * 1);
	if (!move)
		exit(1);
	init_move(stack, move);
	while (stack->a_size > 0)
		move_to_b(stack, move);
	while (stack->b_size > 0)
		push("pa", stack);
}
