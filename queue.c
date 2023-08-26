#include "monty.h"

/**
 * queue - prints the top
 * @stack: stack head
 * @line_count: count amoun of line
 *
 * Return: nothing
 */
void queue(stack_t **stack, unsigned int line_count)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail
 * @n: new value
 * @stack: stack head
 * Reyurn: nothing
 */
void queue_node(stack_t **stack, int n)
{
	stack_t *new, *res;

	res = *stack;
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error\n");
	}
	new->n = n;
	new->next = NULL;
	if (res)
	{
		while (res->next)
			res = res->next;
	}
	if (!res)
	{
		*stack = new;
		new->prev = NULL;
	}
	else
	{
		res->next = new;
		new->prev = res;
	}
}
