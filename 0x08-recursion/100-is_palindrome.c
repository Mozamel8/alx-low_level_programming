#include "main.h"

/**
 * _strlen - return the length of string
 * @s:string
 * Return: the length of string
*/

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * compare2Str - compare each character of string
 * @s: string
 * @num1: smallest itrator
 * @num2: biggest iterator
 * Return: nuber
*/

int compare2Str(char *s, int num1, int num2)
{
	if (*(s + num1) == *(s + num2))
	{
		if (num1 == num2 || num1 == num2 + 1)
			return (1);
		return (0 + compare2Str(s, num1 + 1, num2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - function to check palingdrome
 * @s: string to check
 * Return: palingdrom or not
*/

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare2Str(s, 0, _strlen(s) - 1));
}
