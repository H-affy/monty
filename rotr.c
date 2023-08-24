#include "monty.h"

/**
 * rotr - rotates the stack to the bottom.
 * @stack: The stack
 * @line_count: line count
 *
 * Return: void
 */
void rotr(stack_t **stack, unsigned int line_count)
{
	stack_t *down;
	stack_t *up;

	(void) line_count;

	if (!stack || !*stack || !(*stack)->next)
		return;
	down = *stack;

	while (down->next)
		down = down->next;
	up = down->prev;
	down->next = *stack;
	down->prev = NULL;
	up->next = NULL;
	(*stack)->prev = down;
	*stack = down;
}
