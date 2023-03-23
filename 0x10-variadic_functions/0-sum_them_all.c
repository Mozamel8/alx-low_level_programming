#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum all argument
 * @n:number of argument
 * Return:sum of number
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list arglist;
	unsigned int x = 0, sum = 0;

	if (n == 0)
		return (0);
	
	va_start(arglist,n);
	for (x = 0; x < n; x++)
		sum +=va_arg(arglist, int);

	va_end(arglist);
	return (sum);
}
