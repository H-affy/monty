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
	stack_t *s;
	(void) line_count;

	s = *stack;

	while (s)
	{
		if (s->n <= 0 || s->n > 127)
		{
			break;
		}
		printf("%c", s->n);
		s = s->next;
	}
	printf("\n");
}
