#include "monty.h"

/**
 * push - insert element into stack
 * @stack: The stack
 * @line_cntr: lines amount
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int line_cntr)
{
	char *n = global.argument;

	if ((is_digit(n)) == 0)
	{
		fprint(stderr, "L%d: usage: push integer\n", line_cntr);
		exit(EXIT_FAILURE);
	}
	if (global.data_struct == 1)
	{
		if (!add_node(stack, atoi(global.argument)))
		{
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if (!queue_node(stack, atoi(global.argument)))
		{
			exit(EXIT_FAILURE);
		}
	}
}
