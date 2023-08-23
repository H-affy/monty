#include "monty.h"

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
