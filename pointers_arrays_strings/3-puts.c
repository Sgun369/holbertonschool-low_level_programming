#include "main.h"
/**
 * _puts - prits a string
 *
 * @str: pointer to the char
 *
 * Return: string of char
 */
void _puts(char *str)
{
	while (*str != '\0')

	{
		_putchar(*str + 0);
		str++;
	}

	_putchar ('\n');
}
