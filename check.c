/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 13:03:27 by ngastana          #+#    #+#             */
/*   Updated: 2024/02/01 13:50:32 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(int argc, char **argv)
{
	int	i;
	int	j;
	int	okey;

	i = 0;
	j = 0;
	okey = 0;
	if (argc != 0)
	{
		while (argv[i])
		{
			while (argv[i][j])
			{
				if (argv[i] > 39 && argv[i] < 30)
				{
					okey = 1;
				}
				j++;
			}
			j = 0;
			i++;
		}
	}
	return (okey);
}
//En caso de error, deberá mostrar Error seguido de un “\n” en la salida de er- rores estándar. Algunos de los posibles errores son: argumentos que no son enteros, argumentos superiores a un número entero, y/o encontrar números duplicado

int	main(int argc, char **argv)
{
	if (argc != 0)
	{}
	write (1,'\n', 1);
}
