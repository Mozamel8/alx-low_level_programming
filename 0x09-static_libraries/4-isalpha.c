#include "main.h"

/**
 * _isalpha -  check is alphabet
 * @c: point to alpha
 * Return: 1 success 0 fail
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
