#include "monty.h"

/**
 * isnumber - checks if the string is a number
 * @str: string
 *
 * Return: 1 if string is a number, otherwise 0
 */
int isnumber(char *str)
{
	int n;

	if (!str)
		return (0);
	for (n = 0; str[n]; n++)
		if (n < '0' || n > '9')
			return (0);
	return (1);
}
