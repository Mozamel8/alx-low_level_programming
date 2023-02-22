#include "main.h"

/**
 * _islower - character c return if is low
 *@c:  refered to asscii number of char
 *
 * Return: 1 if lower 0 isn't
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
