#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - add function
 * @a:number one
 * @b:number 2
 * Return: integer
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub function
 * @a:number one
 * @b:number two
 * Return: integer
*/

int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multipy function
 * @a:number one
 * @b:number 2
 * Return:integer
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function divide number
 * @a:number one
 * @b:number two
 * Return:integer
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - funtion return modular
 * @a:number 1
 * @b:number 2
 * Return:integer
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}


