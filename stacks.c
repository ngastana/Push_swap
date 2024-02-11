

void	init_stacks(t_stack *stack, int argc, char **argv)
{
	int	i;

	stack->a_size = 0;
	stack->b_size = 0;
	
}

void	fill_stack(int argc, char **argv, t_stack *stack)
{
	char	**split;
	int		i;

	i = 1;
	split = ft_split(*argv);
	while (split[i])
	{
		push->nums[i] = atoi_long(split[i]);
		i++;
		printf ("%di", push->nums[i]);
	}
} 