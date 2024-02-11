/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:26:16 by ngastana          #+#    #+#             */
/*   Updated: 2024/02/09 12:18:20 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <unistd.h> // write
# include <stdlib.h> //malloc
# include <stdio.h> //printf
# include <limits.h>

typedef struct s_stack
{
	int		*a;
	int		*b;
	int		a_size;
	int		b_size;
	
}		t_stack;

/*split*/
char	**ft_split(char *str);

/*check*/
void	check_arguments(char **argv, int argc);

/*main*/
void	free_exit(t_stack *s, char *msg);
int		main(int argc, char **argv);

/*utils*/
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
long	atoi_long(char *str);

#endif