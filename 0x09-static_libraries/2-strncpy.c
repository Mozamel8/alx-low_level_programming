#include "main.h"

/**
 * _strncpy - function that copies string
 *
 * @dest: destination string
 * @src: source string
 * @n: Number of byte to copy
 * Return: copy string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
	for ( ; i < n; i++)
	dest[i] = '\0';

	return (dest);
}
