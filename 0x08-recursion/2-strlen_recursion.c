#include "main.h"

/**
 *  _strlen_recursion - function return length of string
 * @s: string to return it length
 * Return: Length of string
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	i++;
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
