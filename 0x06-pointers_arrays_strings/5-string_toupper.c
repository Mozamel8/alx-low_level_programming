#include "main.h"

/**
 * string_toupper - change string to upper case
 * @str: string to be convert
 * Return: string in upper case
*/

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
	{
	str[index] -= 32;
	}
	index++;
	}
	return (str);
}
