/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verify.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 07:54:13 by ngastana          #+#    #+#             */
/*   Updated: 2024/02/21 08:09:29 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
