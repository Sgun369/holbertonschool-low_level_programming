#include "main.h"
/**
 * leet - a function that encodes a string into 1337.
 *
 * @inputS:string input
 *
 * Return: @inputS
 */
char *leet(char *inputS)

{
	int index, counter = 0;

	int lower[] = {97, 101, 111, 116, 108};

	int upper[] = {65, 69, 79, 84, 76};

	int leetReplacements[] = {52, 51, 48, 55, 49};

	while (inputS[counter] != '\0')

	{
		for (index = 0; index < 5; index++)
		{
			if (inputS[counter] == lower[index] || inputS[counter] == upper[index])
			{
				inputS[counter] = leetReplacements[index];
				break;
			}
		}
		counter++;
	}
	return (inputS);
}

