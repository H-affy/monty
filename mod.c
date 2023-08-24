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
	int res;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n",
				line_count);
		exit(EXIT_FAILURE);
		return;
	}

	if (((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_count);
		exit(EXIT_FAILURE);
		return;
	}
	res = ((*stack)->next->n) % ((*stack)->n);
	pop(stack, line_count);
	(*stack)->n = res;
}
