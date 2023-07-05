#include <stdio.h>
/**
 * main - multiplies two numbers.
 *
 * @argc:arguments count
 * @argv: arguments
 *
 * Return: 1 and print ERROR if the program doesn't
 *	recieve two integers.
 */
int main(int argc, char **argv __attribute__((unused)))
{
	if (argc < 2)
	{
		printf("ERROR\n");

		return (1);
	}
	return (0);
}
