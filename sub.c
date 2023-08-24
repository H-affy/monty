#include "monty.h"

/**
 * sub - subtracts the first two nodes
 * @stack: the stack
 * @line_count: amounts of lines
 *
 * Return: void
 */
void sub(stack_t **stack, unsigned int line_count)
{
	int res;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n",
				line_count);
		exit(EXIT_FAILURE);
	}

	res = ((*stack)->next->n) - ((*stack)->n);
	pop(stack, line_count);
	(*stack)->n = res;
}
