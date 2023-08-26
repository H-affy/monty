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

	doen = *stack;

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
