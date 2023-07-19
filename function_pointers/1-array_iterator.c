#include "function_pointers.h"
#include <stdlib.h>
/**
* array_iterator -  a function that executes a function
*   given as a parameter on each element of an array.
* @array: pointer to an array of int.
* @size: size of the array.
* @action: pointer to the function we need to use.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;


	if (array == NULL || action == NULL)
			return;
	for (i = 0; i <= size; i++)
	{
		array = malloc(sizeof(char) * i + 1);
		action(array[i]);
		free(array);
	}
}
