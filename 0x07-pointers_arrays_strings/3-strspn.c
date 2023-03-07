#include "main.h"

/**
 * _strspn - function to print number of bytes
 * @s: string contain the number of byte
 * @accept:the number of byte
 * Return: length number
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, length, l, c;

	length = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		c = 0;
		for (l = 0; accept[l] != '\0'; l++)
		{
			if (accept[l] == s[i])
			{
				length++;
				c = 1;
				break;
			}
		}
		if (c == 1)
		continue;
	}

	return (length);
}
