#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - a function that returns the sum of all its parameters.
* @n: const unsigned int
* @...: arguments to input by user.
* Return: sum of all of the argumets.
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum;
	va_list args;

	va_start(args, n);

	if (n == 0)
	{
		return (0);
	}
		for (i = 0; i < n; i++)
		{
			sum += va_arg(args, int);
		}
		va_end(args);
		return (sum);
}

