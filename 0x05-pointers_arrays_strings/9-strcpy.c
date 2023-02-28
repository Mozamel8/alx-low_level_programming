#include "main.h"

/**
 * *_strcpy - copy array of string in another string 
 * @dest: variable point to desination
 * @src: variable to source string
 * Return: char of string
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
