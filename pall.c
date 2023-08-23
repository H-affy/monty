#include "monty.h"

/**
 * pall - function that print stack
 * @head: stack head
 * @line_count: amount of lines
 *
 * Return: void
 */
void pall(stack_t **head, unsigned int line_count __attribute__((unused)))
{
	print_stack(*head);
}
