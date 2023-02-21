#include "main.h"

/**
 * check is alphabet
 *
 * Return: one is alpha zero isn't
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
