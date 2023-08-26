#include "monty.h"

/**
 * _div - divides top value of the node
 * @stack: the stack
 * @line_count: Amount of lines
 *
 * Return: void
 */
void _div(stack_t **stack, unsigned int line_count)
{
	int result = 0, res;
	stack_t *s;

	s = *stack;

	while (s)
	{
		s = s->next;
		result++;
	}
	if (result < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n",
				line_count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	res = s->next->n / s->n;
	s->next-:>n = res;
	*stack = s->next;
	free(s);
}
