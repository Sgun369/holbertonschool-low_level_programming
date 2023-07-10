#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - a function that returns a pointer to a newly
 *	allocated spacce in memory.
 *@str: the source string.
 *
 * Return: returns a pointer to the duplicated string
 *NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	size_t len;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str) + 1;

	copy = malloc(len);

	if (copy == NULL)
	{
		return (NULL);
	}
	memcpy(copy, str, len);
	return (copy);
}
