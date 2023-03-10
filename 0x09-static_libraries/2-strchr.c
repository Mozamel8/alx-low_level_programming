#include "main.h"
#include <stdio.h>

/**
 * _strchr - function locate character in string
 * @s: string to look for character in it
 * @c: character to locate
 * Return: pointer to the first occurrence
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		return (s + i);
	}
	return (NULL);
}
