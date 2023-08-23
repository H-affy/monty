#include "monty.h"

/**
 * pint - print the value of the stack at the top
 * @stack: stack head
 * @line_count: amount of line
 *
 * Return: void.
 */
void pint(stack_t **stack, unsigned int line_count)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_count);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
