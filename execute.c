#include "monty.h"

/**
 * execute - executes the opcode
 * @stack: stack
 * @line_cnt: counts amount of line
 * @file: point to monty file
 * @content: line content
 *
 * Return: No return
 */
int execute(char *content, stack_t **stack, unsigned int line_cnt, FILE *file)
{
	instruction_t opst[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"nop", nop},
		{"add", _add},
		{"sub", _sub},
		{"div", _div},
		{"mul", _mul},
		{"mod", mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{"rotr", rotr},
		{"queue", queue},
		{"stack", _stack},
		{NULL, NULL}
	};
	unsigned int n = 0;
	char *pc;

	pc = strtok(content, "\n\t");

	if (pc && pc[0] == '#')
		return (0);
	bus.arg = strtok(NULL, "\n\t");
	while (opst[n].opcode && pc)
	{
		if (strcmp(pc, opst[n].opcode) == 0)
		{
			opst[n].f(stack, line_cnt);
			return (0);
		}
		n++;
	}
	if (pc && opst[n].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", line_cnt, pc);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
