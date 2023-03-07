#include "main.h"
#include <stdio.h>

/**
 * _strstr - function finds the first 
 * occurrence of the substring
 * @haystack: string
 * @needle: substring
 * Return:Pointers of locating string
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *first = haystack;
		char *second = needle;

		while (*first == *second && *second != '\0')
		{
			first++;
			second++;
		}
		if (*second == '\0')
		{
			return (haystack);
		}
	}
	return (NULL);
}
