#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - function to return square
 * @n: uber to return descrption
 * @j:variable number
 * Return:squaer
*/
int _sqrt(int n, int j);
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - to return square
 * @i: number to calculate root
 * @j: root number
 * Return: squre of number
*/
int _sqrt(int i, int j)
{
	int square = j * j;

	if (square > i)
	return (-1);
	if (square == i)
	return (j);
	return (_sqrt(i, j + 1));
}
