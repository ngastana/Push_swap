/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:59:20 by ngastana          #+#    #+#             */
/*   Updated: 2024/02/24 11:33:18 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;
	int		i;

	i = 0;
	if (argc > 1)
	{
		check_arguments(argv, argc);
		stack = malloc (sizeof(t_stack) * 1);
		if (!stack)
			exit(1);
		init_stacks(stack, argc, argv);
		fill_stack(stack, argc, argv);
		check_duplicate(stack);
		rank_three_a(stack->a, stack->a_size);
		if (stack->a_size == 3 || stack->a_size == 2)
			free_exit (stack, "");
		rank_four_five(stack);
		if (stack->a_size == 4 || stack->a_size == 5)
			exit (1);
		rank_whatever(stack);
		write (1, "\n", 1);
	}
	return (0);
}
