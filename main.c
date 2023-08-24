#define _POSIX_C_SOURCE 200809L

#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

void file_error(char *argv);
void error_usage(void);
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
	size_t buff_len = 0;
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
	while ((getline(&buffer, &buff_len, file)) != (-1))
	{
		if (status)
			break;
		if (*buffer == '\n')
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


/**
 * file_error - file error message and exit
 * @argv: list og argument
 *
 * Description: print message if not possible to open file
 * Return: Nothing
 */
void file_error(char *argv)
{
	fprintf(stderr, "Error: can't open file %s\n", argv);
	exit(EXIT_FAILURE);
}

/**
 * error_usage - prints usage meassage
 * Description: if user does not give any file or
 * more than one argument to the program.
 *
 * Return: Nothing
 */
void error_usage(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
