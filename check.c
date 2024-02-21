/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:03:27 by ngastana          #+#    #+#             */
/*   Updated: 2024/02/21 11:13:05 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	check_util(char c, char c1)
{
	if (c == '+' && c1 == '\0')
		return (1);
	else if (c == '-' && c1 == '\0')
		return (1);
	else if (c == '+' && c1 == ' ')
		return (1);
	else if (c == '-' && c1 == ' ')
		return (1);
	else if (c == ' ' || c == '-' || c == '+')
		return (0);
	else if ((c > '9' || c < '0'))
		return (1);
	else
		return (0);
}

void	check_arguments(char **argv, int argc)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		if (!argv[i][0])
			free_exit (NULL, "Error\n");
		while (argv[i][j] != '\0')
		{
			if (check_util(argv[i][j], argv[i][j +1]) == 1)
			{
				free_exit (NULL, "Error\n");
			}
			j++;
		}
		i++;
	}
}

void	check_duplicate(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->a_size)
	{
		j = i + 1;
		while (j < stack->a_size)
		{
			if (stack->a[i] == stack->a[j])
				free_exit (stack, "Error\n");
			j++;
		}
		i++;
	}
}
