#include "monty.h"

/**
 * swap - Swaps data to previous from top
 * @stack: the stack
 * @line_count: amount of lines
 *
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_count)
{
	stack_t *tmp = NULL;
	int tmp_x = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n",
				line_count);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	tmp_x = tmp->n;
	tmp->n = tmp_x;

	tmp->n = tmp->next->n;
	tmp->next->n = tmp_x;
}
