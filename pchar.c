#include "monty.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/**
 * pchar - prints the int as char
 * @stack: stack
 * @line_count: amount of lines
 *
 * Return: void
 */
void pchar(stack_t **stack, unsigned int line_count)
{
	stack_t *s;

	s = *stack;
	if (!s)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	if (s->n > 127 || s->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, calue out of range\n",
				line_count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", s->n);
}
