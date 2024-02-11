
void free_exit(t_stack *s, char *msg)
{
	int i;

	i = -1;
	if (msg)
		while (msg[i++])
			write (1, &msg[i], 1);
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