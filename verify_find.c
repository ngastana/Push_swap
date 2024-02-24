/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify_find.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 07:54:13 by ngastana          #+#    #+#             */
/*   Updated: 2024/02/24 11:37:41 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	verify_order(int *stack, int size)
{
	int	i;

	i = 0;
	while (i +1 < size)
	{
		if (stack[i] > stack[i +1])
			return (1);
		i++;
	}
	return (0);
}

int	find_smaller_place(int *stack, int size)
{
	int	i;
	int	num;
	int	num_place;

	i = 0;
	num = stack[i];
	num_place = 0;
	while (i < size)
	{
		if (num > stack[i])
		{
			num_place = i;
			num = stack[i];
		}
		i++;
	}
	return (num_place);
}

int	is_circular(int *arr, int size)
{
	int	index;
	int	asc;
	int	des;
	int	i;

	if (size < 2)
		return (0);
	index = 0;
	i = 1;
	while (i < size)
	{
		if (arr[i] < arr[index])
			index = i;
		i++;
	}
	asc = (arr[index] <= arr[(index + 1) % size]);
	des = (arr[index] >= arr[(index + 1) % size]);
	i = 1;
	while (i < size - 1 && (asc || des))
	{
		asc = asc && (arr[(index + i) % size] <= arr[(index + i + 1) % size]);
		des = des && (arr[(index + i) % size] >= arr[(index + i + 1) % size]);
		i++;
	}
	if (asc || des)
		return (1);
	else
		return (0);
}
