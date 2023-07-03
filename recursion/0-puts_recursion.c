#include "main.h"
/**
 * _puts_recursion - a function that prints a string.
 *
 * @s: poiter to the string input.
 *
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');

		return;
	}
	_putchar(*s);

	_puts_recursion(s + 1);
}
