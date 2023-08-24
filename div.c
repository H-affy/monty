#include "monty.h"

/**
 * div - divides top value of the node
 * @stack: the stack
 * @line_count: Amount of lines
 *
 * Return: void
 */
void div(stack_t **stack, unsigned int line_count)
{
	int res;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't div, stack too short\n",
				line_count);
		exit(EXIT_FAILURE);
	}
	if (((*Stack)->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_count);
		exit(EXIT_FAILURE);
		;
		return;
	}

	res = ((*stack)->next->n) / ((*stack)->n);
	pop(stack, line_count);
	(*stack)->n = res;
}
