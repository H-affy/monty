#include "monty.h"

/**
 * add_node - adds node to start of a stack
 * @stack: stack
 * @n: number.
 *
 * Return: The new node, if fails return NULL
 */
void add_node(stack_t **stack, int n)
{
	stack_t *node, *res;

	res = *stack;
	node = malloc(sizeof(stack_t));

	if (node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (res)
		res->prev = node;
	node->n = n;
	node->next = *stack;
	node->prev = NULL;
	*stack = node;
}


/**
 * free_stack - frees dlinkedint_t list
 * @stack: stack
 *
 * Return: void
 */
void free_stack(stack_t *stack)
{
	stack_t *core;

	core = stack;

	while (stack)
	{
		core = stack->next;
		free(stack);
		stack = core;
	}
}
