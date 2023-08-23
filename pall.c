#include "monty.h"

/**
 * pall - function that print stack
 * @stack: stack
 * @line_count: amount of lines
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_count __attribute__((unused)))
{
	print_stack(*stack);
}
