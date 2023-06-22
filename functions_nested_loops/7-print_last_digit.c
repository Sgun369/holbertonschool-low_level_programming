#include "main.h"
/**
 *  print_last_digit - print last digit of an integer.
 *
 *  @int: integer to procecc
 *
 *   Return: The value of the last digit
 */
int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (j < 0)
		j *= -1;
	_putchar(j + '0');
	return (j);
}
