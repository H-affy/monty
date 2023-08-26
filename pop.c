#include "monty.h"

/**
 * pop - delete the element of the stack
 * @stack: The stack head
 * @line_count: amount of lines
 *
 * Return: void
 */
void pop(stack_t **stack, unsigned int line_count)
{
	stack_t *s;

	if (*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	s = *stack;
	*stack = s->next;
	free(s);
}
