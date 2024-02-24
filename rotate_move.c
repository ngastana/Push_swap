/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:56:08 by ngastana          #+#    #+#             */
/*   Updated: 2024/02/24 08:36:00 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_move(t_stack *stack, t_move *move)
{
	int		num_b;
	int		i;
	int		j;

	i = 0;
	j = 0;
	num_b = stack->b[i];
	while (j < stack->a_size)
	{
		while (i < stack->b_size)
		{
			if ((stack->b[i] > num_b) && (stack->b[i] < stack->a[j]))
				num_b = i;
			i++;
		}
		if (j < num_b)
			move->rmove[j] = num_b;
		else
			move->rmove[j] = j;
		j++;
		num_b = 0;
	}
}

void	rrotate_move(t_stack *stack, t_move *move)
{
	int		num_b;
	int		i;
	int		j;

	i = 0;
	j = 0;
	num_b = 0;
	while (j < stack->a_size)
	{
		while (i < stack->b_size)
		{
			if ((stack->b[i] > num_b) && (stack->b[i] < stack->a[j]))
				num_b = i;
			i++;
		}
		if ((stack->a_size - j) < (stack->b_size - num_b))
			move->rrmove[j] = stack->a_size - j;
		else
			move->rrmove[j] = stack->b_size - num_b;
		j++;
		num_b = 0;
	}
}

void	rarrbrotate_move(t_stack *stack, t_move *move)
{
	int		num_b;
	int		i;
	int		j;

	i = 0;
	j = 0;
	num_b = 0;
	while (j < stack->a_size)
	{
		while (i < stack->b_size)
		{
			if ((stack->b[i] > num_b) && (stack->b[i] < stack->a[j]))
				num_b = i;
			i++;
		}
		move->rarrbmove[j] = j + (stack->b_size - num_b);
		j++;
		num_b = 0;
	}
}

void	rbrrarotate_move(t_stack *stack, t_move *move)
{
	int		num_b;
	int		i;
	int		j;

	i = 0;
	j = 0;
	num_b = 0;
	while (j < stack->a_size)
	{
		while (i < stack->b_size)
		{
			if ((stack->b[i] > num_b) && (stack->b[i] < stack->a[j]))
				num_b = i;
			i++;
		}
		move->rbrramove[j] = num_b + (stack->a_size - j);
		j++;
		num_b = 0;
	}
}
