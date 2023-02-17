#include <stdio.h>


/**
 * main - prints the size of various types based on
 * the computer it is compiled and run on ..
 * Return Always 0.
 */

int main(void)

{	
	printf("Size of a char: %zu byte(s)", sizeof(char));

	printf("Size of an int: %zu byte(s)", sizeof(int));

	printf("Size of along int: %zu byte(s)", sizeof(long int));

	printf("Size of a long long int: %zu byte(s)", sizeof(long long int));

	printf("Size of a float: %zu byte(s)", sizeof(float));

	return (0);
}
