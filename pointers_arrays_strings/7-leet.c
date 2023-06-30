#include "main.h"
/**
 * leet - a function that encodes a string into 1337.
 *
 * @str:string input
 *
 * Return: @str
 */
char *leet(char *str)
{
	static char encoded[256];

	int i, j;

	for (i = 0, j = 0; str[i] != '\0'; i++, j++)

	{
		char c = str[i];

		encoded[j] = (c == 'a' || c == 'A') ? '4' :

			(c == 'e' || c == 'E') ? '3' :

			(c == 'o' || c == 'O') ? '0' :

			(c == 't' || c == 'T') ? '7' :

			(c == 'l' || c == 'L') ? '1' : c;
	}
	encoded[j] = '\0';

	return (encoded);
}

