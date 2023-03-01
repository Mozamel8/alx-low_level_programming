#include "main.h"

/**
 * leet - function encode 1337
 * @n: variable to becode
 * Return:char string
*/

char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] == s1[j];
			}
		}
	}
	return (n);
}
