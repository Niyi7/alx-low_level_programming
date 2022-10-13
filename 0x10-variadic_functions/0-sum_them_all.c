#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all - sum of all its parameters
* @n: n args
* Return: sum or if n == 0, return 0
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list args;

	if (n != 0)
	{
		va_start(args, n);
		while (i < n)
		{
			sum += va_arg(args, int);

			1++;
		}
		va_end(args);
		return(sum);
	}
	return (0);
}
