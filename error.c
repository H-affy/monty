#include "monty.h"


void file_error(char *argv);
void error_usage(void);


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

