#include "main.h"
/**
 * *_strcat - appends the src string to the dest string
 * @src: pointer to the source string
 * @dest: pointer to the destination string
 *
 * Return: pointer to the result string.
 */
char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')

	{
		dest_ptr++;


	}
	while (*src != '\0')

	{
		*dest_ptr = *src;

		dest_ptr++;
		src++;
	}
	*dest_ptr = '\0';

	return (dest);
}
