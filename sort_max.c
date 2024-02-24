/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:00:00 by ngastana          #+#    #+#             */
/*   Updated: 2024/02/24 11:39:55 by ngastana         ###   ########.fr       */
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
}

void	rank_whatever(t_stack *stack)
{
	t_move	*move;
	int		i;

	i = 0;
	move = malloc(sizeof(t_move) * 1);
	if (!move)
		exit(1);
	if (verify_order(stack->a, stack->a_size) == 0)
	{
		free_move(move, "");
		free_exit(stack, "");
	}
	push("pb", stack);
	push("pb", stack);
	push("pb", stack);
	rank_three_b(stack->b, stack->b_size);
	i = 0;
	init_move(stack, move);
	rotate_move(stack, move);
	rrotate_move(stack, move);
	rarrbrotate_move(stack, move);
	rbrrarotate_move(stack, move);
	count_move(stack, move);
	best_num_to_b(stack, move);
	move_to_b(stack, move);
	while (stack->b_size != 0)
		push("pa", stack);
	while (i < stack->a_size)
	{
		printf("%i\n", stack->a[i]);
		i++;
	}
}
