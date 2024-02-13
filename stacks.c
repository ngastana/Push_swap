#include "push_swap.h"

//mirar si es frase o no, si es contar numeros que hay, sino se sma por cada argc

void	init_stacks(t_stack *stack, int argc, char **argv)
{
	int	i;

	i = 0;
	stack->a_size = 0;
	stack->b_size = 0;
	while (--argc > 0)
	{
		if (argv[i +1] == ' ')
	}
}

void	fill_stack(t_stack *stack, int argc, char **argv)
{
	char	**split;
	int		i;

	i = 1;
	split = ft_split(*argv);
	while (split[i])
	{
		stack->a[i] = atoi_long(split[i]);
		i++;
		printf ("%di", stack->a[i]);
	}
} 