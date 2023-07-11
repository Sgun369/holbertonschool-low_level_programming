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
	int i = 0, j = 0;

	int lens1, lens2;
	char* result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	{
		lens1 = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		lens2 = s2[j];
	}

	result = (char *)malloc((lens1 + lens2 + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	memcpy(result, s1, lens1);

	memcpy(result + lens1, s2, lens2);

	result[lens1 + lens2] = '\0';

	return (result);



}
