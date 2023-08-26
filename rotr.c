#include "monty.h"

/**
 * rotr - rotates the stack to the bottom.
 * @stack: The stack
 * @line_count: line count
 *
 * Return: void
 */
void rotr(stack_t **stack, __attribute__((unused))  unsigned int line_count)
{
	stack_t *down;

	down = *stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		return;
	}
	while (down->next)
	{
		down = down->next;
	}
	down->next = *stack;
	down->prev->next = NULL;
	down->prev = NULL;
	(*stack)->prev = down;
	*stack = down;
}
