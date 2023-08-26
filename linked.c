#include "monty.h"

/**
 * queue_node - Add a node to stack_t
 * @stack: stack
 * @n: number.
 *
 * Return: the new node, if memory allocation fails
 * the function will return NILL.
 */
stack_t *queue_node(stack_t **stack, const int n)
{
	stack_t *new = malloc(sizeof(stack_t));
	stack_t *core = *stack;

	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;

	if (!*stack)
	{
		new->next = NULL;
		new->prev = NULL;
		*stack = new;
		return (new);
	}

	while (core)
	{
		if (!core->next)
		{
			new->next = NULL;
			new->prev = core;
			core->next = new;
			break;
		}
		core = core->next;
	}
	return (new);
}

/**
 * add_node - adds node to start of a stack
 * @stack: stack
 * @n: number.
 *
 * Return: The new node, if fails return NULL
 */
void add_node(stack_t **stack, int n)
{
	stack_t *node *res;

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
	node->n = *stack;
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
