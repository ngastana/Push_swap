/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:26:16 by ngastana          #+#    #+#             */
/*   Updated: 2024/02/20 10:23:56 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

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

/*putstr*/
void	putstr(char *s);

/*stacks*/
void	init_stacks(t_stack *stack, int argc, char **argv);
void	fill_stack(t_stack *stack, int argc, char **argv);

/*utils*/
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
long	atoi_long(char *str);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);

/*moviments*/
void	push(char *str, t_stack *stack);
void	swap(char *str, int *array, int size);
void	rotate(int *array, int size, char *direction, char stack);

/*sort*/
void	rank_three(t_stack *stack);

/*check*/
void	check_arguments(char **argv, int argc);
void	check_duplicate(t_stack *stack);

/*free and exit*/
void	free_exit(t_stack *s, char *msg);

/*main*/
int		main(int argc, char **argv);

#endif