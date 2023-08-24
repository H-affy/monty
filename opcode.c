#include "monty.h"

/**
 * opcode - function in charge of running built-ins
 * @stack: the stack
 * @str: the string
 * @line_count: amount of lines
 *
 * Return: nothing
 */
void opcode(stack_t **stack, char *str, unsigned int line_count)
{
	int n = 0;

	instruction_t op[] = INSTRUCTIONS;

	if (!strcmp(str, "stack"))
	{
		global.data_struct = 1;
		return;
	}

	if (!strcmp(str, "queue"))
	{
		global.data_struct = 0;
		return;
	}

	while (op[n].opcode)
	{
		if (strcmp(op[n].opcode, str) == 0)
		{
			op[n].f(stack, line_count);
			return; /* if we found a match, run function */
		}
		n++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_count, str);
	exit(EXIT_FAILURE);
}
