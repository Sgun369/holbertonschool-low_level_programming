#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 *
 * @s:pointer to string input
 * @accept: prefix to look for
 *
 * Return: the nuber of bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	int found;

	int i;

	while (*s)
	{
		found = 0;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}

		if (!found)
		{
			return (count);
		}
		count++;
		s++;
	}
	return (count);
}
