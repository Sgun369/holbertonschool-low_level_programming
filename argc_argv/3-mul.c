#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 *
 * @argc:arguments count
 * @argv: arguments
 *
 * Return: 1 and print ERROR if the program doesn't
 *	recieve two integers.
 */
int main(int argc, char *argv[])
{
	int i;

	int result = 1;

	for (i = 1; i < argc; i++)
	{
		result = result * strtol(argv[i], NULL, 10);
	}

	if (argc != 3)
	{
		printf("Error\n");

		return (1);
	}
	else
	{
		printf("%d\n", result);
	}

	return (0);
}
