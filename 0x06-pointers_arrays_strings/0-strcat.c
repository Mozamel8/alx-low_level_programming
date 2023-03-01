#include "main.h"

/**
 * _strcat - function concate two string
 * @dest: represent destination string
 * @src: represent second string
 * Return: character
*/

char *_strcat(char *dest, char *src)
{
	int i, dlen = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
