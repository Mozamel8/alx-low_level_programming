#include "main.h"

/**
 * _strcmp - compare two string
 * @s1: character to string one
 * @s2: character of string two
 * Return: integer number determine the comoarison
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
