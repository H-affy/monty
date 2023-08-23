#include "monty.h"

/**
 * push - insert element into stack
 * @stack: stack head
 * @line_count: amout of line
 *
 * Return: void
 */
void push(stack_t **stack, unsigned int line_count)
{
	char *n = global.argument;

	if ((is_digit(n)) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_count);
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
