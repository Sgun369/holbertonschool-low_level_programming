#include "main.h"
/**
 * factorial - a function that returns the factorial
 *	of a given number
 *
 * @n: integer input number
 *
 * Return: the factorial of n.
 */
int factorial(int n)
{
	if (n < 1)
		return (-1);
	return (n * factorial(n - 1));
}
