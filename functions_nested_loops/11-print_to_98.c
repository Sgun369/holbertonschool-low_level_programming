#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from 1 to 98 separated by a comma
 *
 * @n:number to begin counting from
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)

		for (i = n; i > 98; i--)
			printf("%d, ", i);

	else

		for (i = n; i < 98; i++)
			printf("%d, ", i);
	printf("98\n");
}
