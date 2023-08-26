#define _POSIX_C_SOURCE 200809L

#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

int status = 0;

/**
 * main - check the code
 * @argc: argument count
 * @argv: list of arguments passed
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	FILE *file;
	size_t buf_len = 0;
	char *buffer = NULL;
	char *str = NULL;
	stack_t *stack = NULL;
	unsigned int line_count = 1;

	global.data_struct = 1;

	if (argc != 2)
		error_usage();
	file = fopen(argv[1], "r");

	if (!file)
		file_error(argv[1]);
	while ((getline(&buffer, &buf_len, file)) != (-1))
	{
		if (status)
			break;
		if (*buffer == '\n')
		{
			line_count++;
			continue;
		}
		str = strtok(buffer, "\t\n");
		if (!str || *str == '#')
		{
			line_count++;
			continue;
		}
		global.argument = strtok(NULL, " \t\n");
		opcode(&stack, str, line_count);
		line_count++;
	}
	free(buffer);
	free_stack(stack);
	fclose(file);
	exit(EXIT_SUCCESS);
}
