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

typedef struct s_push
{
	int	*nums;
}	t_push;

/*split*/
int		ft_is_delimiter(char c);
int		ft_words_len(char *str);
char	*ft_get_word(char *str);
char	**ft_split(char *str);
/* static int	count(char const *s, char c);
void		clear(char **matrix);
static	int	diferentes(char const *s, char c);
char		**rellena(char **matrix, const char *s, char c);
char		**ft_split(char const *s, char c); */

/*check*/
int		check(char **argv);

/*main*/
int		main(int argc, char **argv);

/*utils*/
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
long	atoi_long(char *str);

#endif