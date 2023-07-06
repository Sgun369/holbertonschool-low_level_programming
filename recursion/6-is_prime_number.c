#include <stdio.h>
#include "main.h"
/**
 * getFactorial- calculates the factorial of a given number n.
 *
 * @n:input number.
 *
 * Return: returns the calculated factorial f.
 */

long int getFactorial(int n)
{
	 long int f = 1;
	 int i;

	for (i = 2; i <= n; i++)
{
	f *= i;
}
	return (f);
}

/**
 * is_prime_number - checks if a int is a prime number.
 *
 * @n: iput int.
 *
 * Return: 1 if n is prime otherwise zero.
 */
int is_prime_number(int n)
{
	long int fact = getFactorial(n - 1);
if (fact % n == n - 1)
{
	return (1);
}
else
{
	return (0);
}

}
