/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngastana  < ngastana@student.42urduliz.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:26:16 by ngastana          #+#    #+#             */
/*   Updated: 2024/02/28 07:25:16 by ngastana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h> // write
# include <stdlib.h> //malloc
# include <stdio.h> //printf
# include <limits.h>
# include <math.h>

typedef struct s_stack
{
	int		*a;
	int		*b;
	int		a_size;
	int		b_size;
}			t_stack;

typedef struct s_move
{
	int		*rmove;
	int		*rrmove;
	int		*rarrbmove;
	int		*rbrramove;
	int		*num_move;
	int		num;
	int		position;
}			t_move;	

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

/*verify_find*/
int		verify_order(int *array, int size);
int		f_s_place(int *stack, int size);

/*sort*/
void	rank_three_a(t_stack *s, int *stack, int size);
void	rank_three_b(t_stack *s, int *stack, int size);
void	rank_four_five(t_stack *stack);

/*check*/
void	check_arguments(char **argv, int argc);
void	check_duplicate(t_stack *stack);
int		is_circular(int *arr, int size);

/*free and exit*/
void	free_exit(t_stack *s, char *msg);
void	free_move(t_move *move, char *msg);

/*rotate_move*/
void	rotate_move(t_stack *stack, t_move *move);
void	rrotate_move(t_stack *stack, t_move *move);
void	rarrbrotate_move(t_stack *stack, t_move *move);
void	rbrrarotate_move(t_stack *stack, t_move *move);

/*best_num_to_b*/
void	count_move(t_stack *stack, t_move *move);
void	best_num_to_b(t_stack *stack, t_move *move);
int		position_b(t_stack *stack, t_move *move);

/*move_to_b*/
void	move_to_b(t_stack *stack, t_move *move);

/*sort_max*/
void	rank_whatever(t_stack *stack);

/*main*/
int		main(int argc, char **argv);

#endif