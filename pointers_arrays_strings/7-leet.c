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

		if (c == 'a' || c == 'A')
			encoded[j] = '4';

		else if (c == 'e' || c == 'E')
			encoded[j] = '3';

		else if (c == 'o' || c == 'O')
			encoded[j] = '0';
		else if (c == 't' || c == 'T')
			encoded[j] = '7';

		else if (c == 'l' || c == 'L')
			encoded[j] = '1';

		else
			encoded[j] = c;
	}
	encoded[j] = '\0';

	return (encoded);
}

