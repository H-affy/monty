#include "monty.h"

/**
 * is_digit - checks string for digit
 * @string: string
 *
 * Return: 1 on success, 0 if fails
 */
int is_digit(char *string)
{
	if (!string || *string == '\0')
		return (0);
	if (*string == '-')
		string++;
	while (*string)
	{
		if (isdigit(*string) == 0)
			return (0);
		string++;
	}
	return (1);
}
