#include "variadic_functions.h"
/**
* sum_them_all - a function that returns the sum of all its parameters.
* @n: const unsigned int
* @...: arguments to input by user.
* Return: sum of all of the argumets.
*/
int sum_them_all(const unsigned int n, ...)
{
	if n == 0
		return (0);

	int sum;
	unsigned int i;

	const unsigned int *p_n = &n;

	for (i > 0; i <= n; i++)
	{
		sum += n + p_n[i];
		return (sum);
	}
		
}
