#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc.
 *
 * @b: unsigned int.
 *
 * Return: return a pointer.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(99);
	return (p);
}