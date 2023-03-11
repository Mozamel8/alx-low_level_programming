#include <stdio.h>
#include "main.h"

/**
 * main - function to print number of argument
 * @argc: number of argument
 * @argv:array of argument
 * Return: number
*/

int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
