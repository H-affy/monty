#include "monty.h"

/**
 * push - insert element into stack
 * @head: stack head
 * @line_count: amout of line
 *
 * Return: void
 */
void push(stack_t **head, unsigned int line_count)
{
	char *n = global.argument;

	if ((is_digit(n)) == 0)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_count);
		exit(EXIT_FAILURE);
	}
	if (global.data_struct == 1)
	{
		if (!add_node(head, atoi(global.argument)))
		{
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if (!queue_node(head, atoi(global.argument)))
		{
			exit(EXIT_FAILURE);
		}
	}
}
