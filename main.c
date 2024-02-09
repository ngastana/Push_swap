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

//En caso de error, deberá mostrar Error seguido de un “\n” en la salida de er-
//rores estándar. Algunos de los posibles errores son: argumentos que no son 
//enteros, argumentos superiores a un número entero, y/o encontrar números 
//duplicado

void	creat_push(char **argv)
{
	char	**split;
	int		i;
	t_push	*push;

	i = 1;
	push = malloc(sizeof(t_push) * 1);
	if (!push)
		return ;
	split = ft_split(*argv);
	while (split[i])
	{
		push->nums[i] = atoi_long(split[i]);
		i++;
		printf ("%di", push->nums[i]);
	}
}

void	creat_push_one_argument(char **argv)
{
	char	**split;
	int		i;
	t_push	*push;

	i = 0;
	push = malloc(sizeof(t_push) * 1);
	if (!push)
		return ;
	split = ft_split(argv[1]);
	while (split[i])
	{
		push->nums[i] = atoi_long(split[i]);
		i++;
		printf ("%di", push->nums[i]);
	}
}

int	main(int argc, char **argv)
{
//	t_push	*push;

	if (argc > 1)
	{
		if (argc == 2)
		{
			creat_push_one_argument(argv);
			if (check(argv) > 0)
				return (write(1, "Error\n", 6), (0));
		}
		else if (argc > 2)
		{
			creat_push(argv);
		}
	}
	write (1, "\n", 1);
	return (0);
}
