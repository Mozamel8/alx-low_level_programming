#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - function print name
 * @name:name to be print
 * @f:apointer to a function
 * Return:void
*/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
