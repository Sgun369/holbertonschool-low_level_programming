#include <stdio.h>
#include "main.h"
/**
 * print_array - prints elements of an array
 *
 * @n: parameter of the array
 *
 * @a:parameter
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)

	{
		printf("\n");

	}

	for (i = 1; i < n; i++)

	{
		printf(", %d", a[i]);
	}
	printf("\n");
}
