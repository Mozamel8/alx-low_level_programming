#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int res = 0;
	int sign = 1;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; i++)
	{
		res = res * 10 + s[i] - '0';
	}
	return (sign * res);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
*/

int main(int argc, char *argv[])

{

	int result, num1, num2;



	if (argc < 3 || argc > 3)

	{

		printf("Error\n");

		return (1);

	}



	num1 = _atoi(argv[1]);

	num2 = _atoi(argv[2]);

	result = num1 * num2;



	printf("%d\n", result);



	return (0);

}

