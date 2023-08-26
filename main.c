#include "monty.h"
#include <stdio.h>
#include <stdlib.h>


bus_t bus = {NULL, NULL, NULL, 0};

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
	size_t size = 0;
	ssize_t read_line = 1;
	char *content;
	stack_t *stack = NULL;
	unsigned int line_count = 0;


	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file/n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;

	if (!file)
	{
		fprintf(stderr, "Error: cant't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, file);
		bus.content = content;
		line_count++;

		if (read_line > 0)
		{
			execute(content, &stack, line_count, file);
		}
		free(content);
	}
	free_stack(stack);
	fclose(file);
	return (0);
}
