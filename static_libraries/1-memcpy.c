#include "main.h"
/**
 * _memcpy - a function that copies memory area
 *
 * @dest: buffer were we will copy to
 * @src: what to copy
 * @n: bytes of src
 *
 * Return: Always 0.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
