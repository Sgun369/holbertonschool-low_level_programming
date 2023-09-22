#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm.
 * @array: pointer to the first element of the array
 * @size: number of element of the array to search in.
 * @value: value to search for.
 * Return: the index where the value is located
 * if value not present or array is NULL returns -1.
*/
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int middle, i;


	if (array == NULL || size == 0)

		return (-1);


	while (left <= right)
	{
		middle = left + (right - left) / 2;

		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}

		printf("\n");
	if (array[middle] == value)
		return (middle);

		else if (array[middle] < value)
			left = middle + 1;

		else
			right = middle - 1;
	}
	return (-1);
}
