#include "main.h"
/**
 * puts2 - prints every other characcter of a string
 *
 * @str: char to print of
 *
 * Retturn: nothing
 */
void puts2(char *str)
{
	int s;

	for (s = 0; str[s] != '\0'; s++)
	{
		if (s % 2 == 0)

			_putchar(str[s]);
	}
			_putchar('\n');
}
