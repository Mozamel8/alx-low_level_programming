#include "main.h"

/**
 * factorial - function print factorial of given number
 * @n: number given
 * Return:Factorial number
*/

int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n <= 1)
	{
	return (1);
	}
	return (n * factorial(n - 1));
}
