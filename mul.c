#include "monty.h"

/**
 * _mul - multiplies the top value
 * @stack: the stack
 * @line_count: amount of lines
 *
 * Return: void
 *
 */
void _mul(stack_t **stack, unsigned int line_count)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n",
				line_count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	s = *stack;
	res = s->next->n * s->n;
	s->next->n = res;
	*stack = s->next;
	free(s);
}
