#include "function_pointers.h"
#include <stdlib.h>
/**
* int_index - a function that searches for an integer.
* @array: pointer to an array.
* @size: sizeo of th array.
* @cmp: pointer to the function cmp.
*
* Return: returns the index of the first element for which the
* cmp function does not return 0.
*/
int int_index(int *array, int size, int (*cmp) (int))
{
	int i;

	if (array != NULL && cmp != NULL)

	for (i = 0; i < size; i++)
{
	if (cmp(array[i]) != 0)
		return (i);
}
		return (-1);
}

