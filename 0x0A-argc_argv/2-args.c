#include <stdio.h>
#include "main.h"

/**
 * main - print all arguments
 * @argc:number of argument
 * @argv:array of arguments
 * Return: Always 0
*/

int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
	{
		printf("%s\n", argv[c]);
	}
	return (0);
}
