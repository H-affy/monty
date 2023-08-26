#include "monty.h"

/**
 * _sub - subtracts the first two nodes
 * @stack: the stack
 * @line_count: amounts of lines
 *
 * Return: void
 */
void _sub(stack_t **stack, unsigned int line_count)
{
	int res, node;

	stack_t *s;

	s = *stack;
	for (node = 0; s != NULL; node++)
		s = s->next;
	if (node < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n",
				line_count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	s = *stack;
	res = s->next->n - s->n;
	s->next->n = res;
	*stack = s->next;
	free(s);
}
