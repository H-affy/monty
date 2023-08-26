#include "monty.h"

/**
 * pall - function that print stack
 * @stack: stack
 * @line_count: amount of lines
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_count)
{
	stack_t *s;
	(void) line_count;

	s = *stack;
	if (s == NULL)
		return;
	while (s)
	{
		printf("%d\n", s->n);
		s = s->next;
	}
}
