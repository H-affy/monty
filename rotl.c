#include "monty.h"

/**
 * rotl - rotates the element of stack
 * @stack: stack
 * @line_count: count line
 * Return: void.
 */
void rotl(stack_t **stack, unsigned int line_count)
{
	stack_t *back;
	stack_t *front;

	(void) line_count;
	if (!stack || !*stack || !(*stack)->next)
		return;
	back = front = *stack;

	while (front->next)
		front = front->next;
	front->next = back;
	back->prev = front;
	*stack = back->next;
	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
}
