/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_exit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 09:59:29 by ngastana          #+#    #+#             */
/*   Updated: 2024/02/22 19:26:20 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_exit(t_stack *stack, char *msg)
{
	int	i;

	i = -1;
	if (msg)
		while (msg[i++])
			write (1, &msg[i], 1);
	if (stack != NULL)
	{
		if (stack->a != NULL)
			free(stack->a);
		if (stack->b != NULL)
			free(stack->b);
		if (stack != NULL)
			free (stack);
	}
	exit(1);
}

void	free_move(t_move *move)
{
	if (move != NULL)
	{
		if (move->rarrbmove != NULL)
			free(move->rarrbmove);
		if (move->rmove != NULL)
			free(move->rmove);
		if (move->rbrramove != NULL)
			free (move->rbrramove);
		if (move->rrmove != NULL)
			free (move->rrmove);
		if (move->num_move != NULL)
			free (move->num_move);
	}
}
