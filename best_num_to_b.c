/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_num_to_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 16:43:11 by ngastana          #+#    #+#             */
/*   Updated: 2024/02/27 19:01:22 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	count_move(t_stack *stack, t_move *move)
{
	int		i;

	i = 0;
	while (i != stack->a_size)
	{
		if (move->rmove[i] > move->rrmove[i])
			move->num_move[i] = move->rrmove[i];
		else
			move->num_move[i] = move->rmove[i];
		if (move->rbrramove[i] < move->num_move[i])
			move->num_move[i] = move->rbrramove[i];
		if (move->rarrbmove[i] < move->num_move[i])
			move->num_move[i] = move->rarrbmove[i];
		i++;
	}
}

void	best_num_to_b(t_stack *stack, t_move *move)
{
	int		i;

	i = 0;
	move->num = move->num_move[i];
	move->position = 0;
	while (i != stack->a_size)
	{
		if (move->num > move->num_move[i])
		{
			move->num = move->num_move[i];
			move->position = i;
		}
		i++;
	}
}

int	position_b(t_stack *stack, t_move *move)
{
	int		i;
	int		num_b;
	int		position;

	i = 0;
	position = 0;
	num_b = stack->b[i];
	while (i < stack->b_size)
	{
		if ((stack->b[i] > num_b) && (stack->b[i] < stack->a[move->position]))
		{
			num_b = stack->b[i];
			position = i;
		}
		i++;
	}
	return (position);
}
