/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stacks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 09:44:30 by ngastana          #+#    #+#             */
/*   Updated: 2024/02/21 09:19:32 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stacks(t_stack *stack, int argc, char **argv)
{
	int	i;

	i = 0;
	stack->a_size = 1;
	if (argc == 2)
	{
		while (argv[1][i] == ' ')
			i++;
		while (argv[1][i] != '\0')
		{
			while (argv[1][i] == ' ' && argv[1][i +1] == ' ')
				i++;
			if (argv[1][i] == ' ' && argv[1][i +1] == '\0')
				i++;
			if (argv[1][i] == ' ')
				stack->a_size = stack->a_size +1;
			i++;
		}
	}
	else
		stack->a_size = argc -1;
	stack->a = malloc (sizeof(int) * stack->a_size);
	stack->b = malloc (sizeof(int) * stack->a_size);
	if (!(stack->b || stack->a))
		free_exit(stack, "Eror\n");
}

static void	fill_stack_argu_two(t_stack *stack, char **argv)
{
	char	**split;
	int		i;

	i = 0;
	split = ft_split(argv[1]);
	if (!(split))
		free_exit(stack, "Error\n");
	while (split[i])
	{
		stack->a[i] = atoi_long(split[i]);
		if (!(stack->a[i]))
			free_exit(stack, "Error\n");
		i++;
	}
	free (split);
}

void	fill_stack(t_stack *stack, int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc == 2)
		fill_stack_argu_two(stack, argv);
	else
	{
		while (i < argc -1)
		{
			stack->a[i] = atoi_long(argv[i +1]);
			if (!(stack->a[i]))
				free_exit(stack, "Error\n");
			i++;
		}
	}
}
