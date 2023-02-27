#include "main.h"

/**
 * _strlen - Returns the length of string.
 * @s: string to calculate it length
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
	length++;
	return (length);
}
