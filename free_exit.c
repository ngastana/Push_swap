#include "push_swap.h"

void free_exit(t_stack *stack, char *msg)
{
	int i;

	i = -1;
	if (msg)
		while (msg[i++])
			write (1, &msg[i], 1);
	if (stack != NULL)
	{
		if (stack->a != NULL)
			free(stack->a);
		if (stack->b != NULL)
			free(stack->b);
		if (stack != NULL)
			free (stack);
	}
	exit(1);
}