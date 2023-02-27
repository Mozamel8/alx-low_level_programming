#include "main.h"

/**
 * _puts - Print string followed by new line
 * @str : pointer variable to string
 *
 * Return: void
*/

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
