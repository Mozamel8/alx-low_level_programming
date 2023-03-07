#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - a function that searches
 * a string for any of a set of bytes
 * @s: string which we will search in
 * @accept: byte of string
 * Return: Byte of string
*/

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n]; n++)
		{
			if (s[i] == accept[n])
			return (s + i);
		}
	}
	return (NULL);
}
