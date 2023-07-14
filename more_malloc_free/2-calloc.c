#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _calloc - a function that allocates memory for an array
*	using malloc.
*@nmemb: size of elements.
* @size: size of elements.
*
* Return: pointer to the allocated memory.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = (void *) malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}
