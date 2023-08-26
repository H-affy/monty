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
	stack_t *tmp;
	int tmp_x = 0, res;

	tmp = *stack;

	while (tmp)
	{
		tmp = tmp->next;
		tmp_x++;
	}
	if (tmp_x < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n",
				line_count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	res = tmp->n;
	tmp->n = tmp->next->n;
	tmp->next->n = res;
}
