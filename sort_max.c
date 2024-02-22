/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:00:00 by ngastana          #+#    #+#             */
/*   Updated: 2024/02/22 20:18:04 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rank_whatever(t_stack *stack)
{
	t_move	*move;

	push("pb", stack);
	push("pb", stack);
	push("pb", stack);
	rank_three(stack->a, stack->a_size);
	move = (t_move *)malloc(sizeof(t_move));
	if (!move)
		exit(1);
	move->rmove = malloc (sizeof(int) * stack->a_size);
	move->rrmove = malloc (sizeof(int) * stack->a_size);
	move->rbrramove = malloc (sizeof(int) * stack->a_size);
	move->rarrbmove = malloc (sizeof(int) * stack->a_size);
	if (!(move->rmove || move->rrmove || move->rarrbmove || move->rbrramove))
		free_move(move);
	rotate_move(stack, move);
	rrotate_move(stack, move);
	rarrbrotate_move(stack, move);
	rbrrarotate_move(stack, move);
	count_move(stack, move);
	best_num_to_b(stack, move);
	move_to_b(stack, move);
	free_move(move);
}
