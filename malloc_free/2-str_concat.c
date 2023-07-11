#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings.
 *
 * @s1: string to concatenate.
 * @s2: string to concatenate.
 *
 * Return: return a pointer to the newly allocated space
 *	in memory or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;

	int lens1, lens2;

	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	lens1 = strlen(s1);

	lens2 = strlen(s2);

	result = (char *)malloc((lens1 + lens2 + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lens2; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; j < lens2; j++)
	{
		result[i + j] = s2[j];
	}
	result[i + j] = '\0';

	return (result);



}
