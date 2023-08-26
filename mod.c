#include "monty.h"


/**
 * mod - prints the remainder of the division
 * @stack: the stack
 * @line_count: amount of lines
 *
 * Return: void
 */
void mod(stack_t **stack, unsigned int line_count)
{
	int result = 0, res;
	stack_t *s;

	s = *stack;

	while (s)
	{
		s = s->next;
		result++;
	}
	if (result < 2))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n",
				line_count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	s = *stack;
	if (s->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	res = s->next->n % s->n;
	s->next-> = res;
	*stack = s->next;
	free(s);
}
