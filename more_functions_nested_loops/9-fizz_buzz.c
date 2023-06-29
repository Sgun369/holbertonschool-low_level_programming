#include <stdio.h>
#include "main.h"
/**
*main - prints numbers 1 to 100 followed by a new line
*prints Fizz if nymber is multiple of 3
*prints Buzz if the number is a multiple of 5
*prints FizzBuzz if the number is a pultiple of 3 and 5
*each number and word should be separated by a space
*
*Return: Always 0.
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)

	{
		if (i % 3 == 0 && !(i % 5 == 0))
			printf("Fizz");
		else if (i % 5 == 0 && !(i % 3 == 0))
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);
		if (i != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
