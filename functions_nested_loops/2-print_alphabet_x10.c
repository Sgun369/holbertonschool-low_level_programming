#include "main.h"
/**
* print_alphabet_x10 - print a..z 10 times
*
* Return: Always 0.
*/
void print_alphabet_x10(void)
{
	int j = 1;

	while (j <= 10)
	{
		char i = 'a';
		while (i <= 'z')
		{

			_putchar(i);
			i++;
		}
	_putchar('\n');
	j++;
	}
}
