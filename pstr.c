#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * pstr - prints content of a stack as string
 * @stack: the stack
 * @line_count: amount of lines
 *
 * Return: nothing
 */
void pstr(stack_t **stack, unsigned int line_count __attribute__((unused)))
{
	stack_t *core = *stack;

	while (core)
	{
		if (core->n <= 0 || core->n > 127)
			break;
		putchar((char) core->n);
		core = core->next;
	}
	putchar('\n');
}
