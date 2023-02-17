#include <stdio.h>

/**
 * main - print alphabet except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char aLph;

	for (aLph = 'a';aLph <= 'z';aLph++)
	{
		if(aLph != 'e' && aLp != 'q')
		{
			putchar(aLph);
		}
	}

	putchar(aLph);

	return (0);
}
