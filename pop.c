#include "monty.h"

/**
 * pop - delete the element of the stack
 * @stack: The stack head
 * @line_count: amount of lines
 *
 * Return: void
 */
void pop(stck_t **stack, unsigned int line_count)
{
	stack_t *tmp = NUll;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_count);
		exit(EXIT_FAILURE);
	}
	tmp = (*stack)->next;
	free(*stack);
	*stack = tmp;
	if (!*stack)
		return; /*prevents error cause next line might assign NULL */
	(*head)->prev = NULL;
}
