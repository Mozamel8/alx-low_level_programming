#include "main.h"

/*
 * _strlen - function to calculate length
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
