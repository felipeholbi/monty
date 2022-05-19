#include "monty.h"
#include <ctype.h>

/**
 * IsNumb - check if is a number or not
 *
 * @s: passed the argument
 * Return: 1 if is int 0 otherwise
 */

int IsNumb(char *s)
{
	int i;

	for (i = 0; s[i] != '\n' && s[i]; i++)
	{
	if ((isdigit(s[i]) == 0) && s[i] != '-')
	return (0);
	}
	return (1);
}
