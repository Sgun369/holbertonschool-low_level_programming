#include "main.h"
/**
 * _strcmp - compare two strings
 *
 * @s1: pointer to the first string to compare
 * @s2: pointer to te second string to compare
 *
 * Return: o or (-1) or 1
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')

	{
		if (*s1 < *s2)

			return (-1);

		else if (*s1 > *s2)

			return (1);

		s1++;

		s2++;
	}

	if (*s1 == '\0' && *s2 == '\0')

		return (0);

	else if (*s1 == '\0')

		return (-1);

	else
		return (1);
}
