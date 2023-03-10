#include "main.h"

/**
 * _isdigit - function check for digit 0 - 9
 * @c:character to be checked
 *
 * Return: 0 if not 1 if digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
