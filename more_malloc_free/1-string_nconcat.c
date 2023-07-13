#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - a function thatconcatenates two string.
 *
 * @s1: string to copy
 * @s2: string to copy.
 * @n: number of bytes to concatenaate.
 *
 * Return: pointer to a new sring, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1, len2;

	char *result;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
	n = len2;

	result = (char *)malloc((len1 + n + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strncat(result, s2, n);

	return (result);
}
