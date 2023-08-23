#include "monty.h"

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
