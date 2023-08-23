#include "monty.h"

/**
 * add - adds two nodes of the stack
 * @stack: stack
 * @line_count: amout of lines
 *
 * Return: void.
 */
void add(stack_t **stack, unsigned int line_count)
{
	int res;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n",
				line_count);
		exit(EXIT_FAILURE);
	}

	res = ((*stack)->next->n) + ((*stack)->n);
	pop(stack, line_count);
	(*stack)->n = res;
}
