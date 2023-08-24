#include "monty.h"

/**
 * mul - multiplies the top value
 * @stack: the stack
 * @line_count: amount of lines
 *
 * Return: void
 *
 */
void mul(stack_t **stack, unsigned int line_count)
{
	int res;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n",
				line_count);
		exit(EXIT_FAILURE);
		return;
	}

	res = ((*stack)->next->n) * ((*stack)->n);
	pop(stack, line_count);
	(*stack)->n = res;
}
