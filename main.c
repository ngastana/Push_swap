/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:59:20 by ngastana          #+#    #+#             */
/*   Updated: 2024/02/09 12:50:15 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack;

	if (argc > 1)
	{
		check_arguments(argv, argc);
		stack = malloc (sizeof(t_stack) * 1);
		if (!stack)
			exit(1);
		fill_stack(stack, argc, argv);
		init_stacks(stack, argc, argv);
		check_duplicate(stack);
	}
	write (1, "\n", 1);
	return (0);
}
