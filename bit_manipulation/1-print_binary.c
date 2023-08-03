#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: unsigned long int to print.
 * Return: void.
*/
void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned long int) * 8;
	int start = 0;
	int i;

	for (i = size - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			start = 1;
			_putchar('1');
		}
		else if (start)
		{
			_putchar('0');
		}
	}
	if (!start)
	{
		_putchar('0');
	}
}
