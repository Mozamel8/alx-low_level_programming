#include "main.h"

/*
 * _strlen -  calculate length of string and return length
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
