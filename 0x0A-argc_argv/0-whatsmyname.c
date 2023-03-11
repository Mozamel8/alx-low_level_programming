#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the name of the program
 * @argc:number of argument
 * @argv: array of argument
 * Return: Always zero
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
