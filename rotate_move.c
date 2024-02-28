/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:56:08 by ngastana          #+#    #+#             */
/*   Updated: 2024/02/28 13:52:46 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_move(t_stack *stack, t_move *move)
{
	int		num_b;
	int		i;
	int		j;
	int		pos_b;

	j = -1;
	while (j++ < stack->a_size)
	{
		i = 0;
		pos_b = f_s_place(stack->b, stack->b_size);
		num_b = stack->b[f_s_place(stack->b, stack->b_size)];
		while (i < stack->b_size)
		{
			if ((stack->b[i] > num_b) && (stack->b[i] < stack->a[j]))
			{
				num_b = stack->b[i];
				pos_b = i;
			}
			i++;
		}
		if (j < pos_b)
			move->rmove[j] = pos_b;
		else
			move->rmove[j] = j;
	}
}

void	rrotate_move(t_stack *stack, t_move *move)
{
	int		num_b;
	int		i;
	int		j;
	int		pos_b;

	j = -1;
	while (j++ < stack->a_size)
	{
		i = 0;
		pos_b = f_s_place(stack->b, stack->b_size);
		num_b = stack->b[f_s_place(stack->b, stack->b_size)];
		while (i < stack->b_size)
		{
			if ((stack->b[i] > num_b) && (stack->b[i] < stack->a[j]))
			{
				num_b = stack->b[i];
				pos_b = i;
			}
			i++;
		}
		if ((stack->a_size - j) < (stack->b_size - pos_b))
			move->rrmove[j] = stack->b_size - pos_b;
		else
			move->rrmove[j] = stack->a_size - j;
	}
}

void	rarrbrotate_move(t_stack *stack, t_move *move)
{
	int		num_b;
	int		i;
	int		j;
	int		pos_b;

	pos_b = f_s_place(stack->b, stack->b_size);
	j = 0;
	while (j < stack->a_size)
	{
		i = 0;
		num_b = stack->b[f_s_place(stack->b, stack->b_size)];
		while (i < stack->b_size)
		{
			if ((stack->b[i] > num_b) && (stack->b[i] < stack->a[j]))
			{
				num_b = stack->b[i];
				pos_b = i;
			}
			i++;
		}
		move->rarrbmove[j] = j + (stack->b_size - pos_b);
		j++;
	}
}

void	rbrrarotate_move(t_stack *stack, t_move *move)
{
	int		num_b;
	int		i;
	int		j;
	int		pos_b;

	j = 0;
	pos_b = f_s_place(stack->b, stack->b_size);
	while (j < stack->a_size)
	{
		i = 0;
		num_b = stack->b[f_s_place(stack->b, stack->b_size)];
		while (i < stack->b_size)
		{
			if ((stack->b[i] > num_b) && (stack->b[i] < stack->a[j]))
			{
				num_b = stack->b[i];
				pos_b = i;
			}
			i++;
		}
		move->rbrramove[j] = pos_b + (stack->a_size - j);
		j++;
	}
}
