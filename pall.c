#include "monty.h"

/**
 * pall - function that printd the stack
 * @stack: stack
 * @line_cntr: line amount
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_cntr __attribute__((unused)))
{
	print_stack(*stack)
}
