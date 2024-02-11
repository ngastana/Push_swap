/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:03:27 by ngastana          #+#    #+#             */
/*   Updated: 2024/02/09 11:45:02 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void free_exit(t_stack *s, char *msg)
{
	int i;

	i++;
	if (msg)
		while (msg[i])
			write (1, &s, 1);
	if (s != NULL)
	{
		if (s->a != NULL)
			free(s->a);
		if (s->b != NULL)
			free(s->b);
		if (s != NULL)
			free (s);
	}
	exit(1);
}

int	check(char **argv)
{
	int	i;
	int	j;
	int	okey;

	i = 0;
	okey = 0;
	while (i++ < argc)
	{
		j = 0;
		if (!argv[i][0] || (argv[i][0] && argv[i][0] == ' '))
			free_exit (NULL, "Error\n");
		while (argv[i][j] != '\0')
		{
			if ((!(argv[i][j] <= 48 || argv[i][j] >= 57) && argv[i][j] != ' ') && argv[i][j] != '-' && argv[i][j] != '+') || (argv[i][j] == '-' && argv[i][j + 1] == '\0') || (argv[i][j] == '+' && argv[i][j + 1] == '\0' || (argv[i][j] == '-' && argv[i][j + 1] == ' ') || (argv[i][j] == '-' && argv[i][j + 1] == ' ')) 
				free_exit (NULL, "Error"\n");
			j++;
		}
	}
	return (okey);
}
