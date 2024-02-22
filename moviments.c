/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moviments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 07:48:42 by ngastana          #+#    #+#             */
/*   Updated: 2024/02/22 20:08:37 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(char *str, t_stack *stack)
{
	int	tmp;

	if (str[1] == 'a')
	{
		if (stack->b_size <= 0)
			return ;
		tmp = stack->b[0];
		ft_memmove(stack->a + 1, stack->a, sizeof(int) * stack->a_size);
		stack->a[0] = tmp;
		stack->b_size--;
		ft_memmove(stack->b, stack->b + 1, sizeof(int) * stack->b_size);
		stack->a_size++;
	}
	else if (str[1] == 'b')
	{
		if (stack->a_size <= 0)
			return ;
		tmp = stack->a[0];
		ft_memmove(stack->b + 1, stack->b, sizeof(int) * stack->b_size);
		stack->b[0] = tmp;
		stack->a_size--;
		ft_memmove(stack->a, stack->a + 1, sizeof(int) * stack->a_size);
		stack->b_size++;
	}
	putstr(str);
}

void	swap(char *str, int *array, int size)
{
	int	tmp;

	if (size <= 0)
		return ;
	tmp = array[0];
	array[0] = array[1];
	array[1] = tmp;
	putstr(str);
}

void	rotate(int *array, int size, char *direction, char stack)
{
	int	tmp;

	if (size < 0)
		return ;
	if (direction[0] == 'u')
	{
		tmp = array[0];
		ft_memmove(array, array + 1, sizeof(int) * (size - 1));
		array[size - 1] = tmp;
		write(1, "r", 1);
	}
	else if (direction[0] == 'd')
	{
		tmp = array[size - 1];
		ft_memmove(array + 1, array, sizeof(int) * (size - 1));
		array[0] = tmp;
		write(1, "rr", 2);
	}
	if (stack != ' ')
	{
		write (1, &stack, 1);
		write (1, "\n", 1);
	}
}
