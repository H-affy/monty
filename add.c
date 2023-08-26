#include "monty.h"

/**
 * _add - adds two nodes of the stack
 * @stack: stack
 * @line_count: amout of lines
 *
 * Return: void.
 */
void _add(stack_t **stack, unsigned int line_count)
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
		fprintf(stderr, "L%d: can't add, stack too short\n",
				line_count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}

	s = *stack;
	res = s->n + s->next->n;
	s->next->n = res;
	*stack = s->next;
	free(s);
}
