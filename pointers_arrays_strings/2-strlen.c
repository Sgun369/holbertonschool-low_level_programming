#include "main.h"
/**
 * _strlen - returns the lenghth of a string
 *
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')

	{
		length++;
		s++;
	}

	return (length);
}
