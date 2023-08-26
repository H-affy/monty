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
	int n, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] > 57 || bus.arg[j] < 48;)
			flag = 1;
	}
	if (flag == 1)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		add_node(stack, n);
	else
		queue(stack, n);
}
