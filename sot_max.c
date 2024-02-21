/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sot_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 10:56:08 by ngastana          #+#    #+#             */
/*   Updated: 2024/02/21 12:31:53 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rank_whatever(t_stack *stack)
{
	int	i;

	push("pb", stack);
	push("pb", stack);
	push("pb", stack);
	rank_three(stack);
}

void	rotate_move(t_stack *stack)
{
	int	asize;
	int	bsize;
	int	num_b;
	int	i;
	int	j;

	i = 0;
	j = 0;
	num_b = 0;
	while (j != stack->a_size)
	{
		while (i != stack->b_size)
		{
			if ((stack->b[i] > num_b) && (stack->b[i] < stack->a[j]))
				num_b = i;
			i++;
		}
		if (j < num_b)
			stack->rmove[j] = num_b;
		else
			stack->rmove[j] = j;
	}
}

void	rrotate_move(t_stack *stack)
{
	int	asize;
	int	bsize;
	int	num_b;
	int	i;
	int	j;

	i = 0;
	j = 0;
	num_b = 0;
	while (j != stack->a_size)
	{
		while (i != stack->b_size)
		{
			if ((stack->b[i] > num_b) && (stack->b[i] < stack->a[j]))
				num_b = i;
			i++;
		}
		if ((stack->a_size - j) < (stack->b_size - num_b))
			stack->rrmove[j] = stack->a_size - j;
		else
			stack->rrmove[j] = stack->a_size - j;
	}
}

void	rrotate_move(t_stack *stack)
{
	int	asize;
	int	bsize;
	int	num_b;
	int	i;
	int	j;

	i = 0;
	j = 0;
	num_b = 0;
	while (j != stack->a_size)
	{
		while (i != stack->b_size)
		{
			if ((stack->b[i] > num_b) && (stack->b[i] < stack->a[j]))
				num_b = i;
			i++;
		}
		if ((stack->a_size - j) < (stack->b_size - num_b))
			stack->rrmove[j] = stack->a_size - j;
		else
			stack->rrmove[j] = stack->a_size - j;
	}
