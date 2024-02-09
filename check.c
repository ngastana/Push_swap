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

int	check(char **argv)
{
	int	i;
	int	j;
	int	okey;

	i = 1;
	j = 0;
	okey = 0;
	while (argv[i] != NULL)
	{
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] <= 48 || argv[i][j] >= 57)
			{
				if (argv[i][j] != 32)
				{
					printf("%c", argv[i][j]);
					okey = 1;
				}
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (okey);
}
