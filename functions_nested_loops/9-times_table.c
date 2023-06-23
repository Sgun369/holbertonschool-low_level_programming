#include "main.h"
/**
 * times_table - prints 9 times table
 *
 *  Return: Always void
 */
void times_table(void)

{
	int i, j, prod;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			prod = i * j;

			if (j == 0)
			{
			_putchar(prod + '0');
			}
if (prod < 10 && j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(prod + '0');
}
else if (prod >= 10)
{
_putchar(',');
_putchar(' ');
_putchar((prod / 10) + '0');
		_putchar((prod % 10) + '0');

}
		}
	_putchar('\n');
	}
}
