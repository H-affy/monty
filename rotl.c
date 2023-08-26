#include "monty.h"

/**
 * rotl - rotates the element of stack
 * @stack: stack
 * @line_count: count line
 * Return: void.
 */
void rotl(stack_t **stack,__attribute__((unused))  unsigned int line_count)
{
	stack_t *s = *stack *res;

	if (stack == NULL || (*stack)->next == NULL)
	{
		return;
	}
	res = (*stack)->next;
	res->prev = NULL;

	while (s->next != NULL)
	{
		s = s->next;
	}
	s->next = *stack;
	(*stack)->next = NULL;
	(*stack)->prev = s;
	(*stack) = res;
}
