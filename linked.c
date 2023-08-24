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
stack_t *add_node(stack_t **stack, const int n)
{
	stack_t *new = malloc(sizeof(stack_t));

	if (!new)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(new);
		return (NULL);
	}
	new->n = n;

	new->next = *stack;
	new->prev = NULL;
	if (*stack)
		(*stack)->prev = new;

	*stack = new;
	return (new);
}

/**
 * print_stack - function that prints the content of stack
 * @stack: stack
 * Return: number of element
 */
size_t print_stack(const stack_t *stack)
{
	size_t s = 0;

	while (stack)
	{
		printf("%d\n", stack->n);
		stack = stack->next;
		s++;
	}

	return (s);
}

/**
 * free_stack - frees dlinkedint_t list
 * @stack: stack
 *
 * Return: void
 */
void free_stack(stack_t *stack)
{
	stack_t *core = stack;
	stack_t *next;

	if (stack)
	{
		next = stack->next;
		while (core)
		{
			free(core);
			core = next;
			if (next)
				next = next->next;
		}
	}
}
