#include "search_algos.h"
/**
 * linear_search - searchs for a value in an array of integers
 * using the linear search
 * @array: pointer to the first element of the array.
 * @size: number of elements in array.
 * @value: the vvalue to search for.
 * Return: the first index where value is located
 * NULL if array is NULL or if value is not present in array.
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value cheked array [%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			printf("Found %d at index: %ld\n", value, i);
				return (i);
		}


	}

		return (-1);

}
