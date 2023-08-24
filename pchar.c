#include "monty.h"

/**
 * pchar - prints the int as char
 * @stack: stack
 * @line_count: amount of lines
 *
 * Return: void
 */
void pchar(stack_t **stack, unsigned int line_count)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_count);
		exit(EXIT_FAILURE);
		return;
	}
	if (isascii((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: can't pchar, calue out of range\n",
				line_count);
		exit(EXIT_FAILURE);
		return;
	}
	printf("%c\n", (*stack)->n);
}
