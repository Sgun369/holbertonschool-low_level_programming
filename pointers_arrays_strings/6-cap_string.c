#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 *
 * @inp: strinng as input.
 *
 * Return: inp
 */
char *cap_string(char *inp)
{
	int ind = 0;

	while (inp[ind] != '\0')

	{
		if (inp[ind] >= 97 && inp[ind] <= 122)

		{
			if (ind == 0)

			{
				inp[ind] -= 32;
			}

			if (inp[ind - 1] == 32 || inp[ind - 1] == 9 ||
			inp[ind - 1] == 10 ||
			inp[ind - 1] == 44 || inp[ind - 1] == 59 ||
			inp[ind - 1] == 46 || inp[ind - 1] == 46 ||
			inp[ind - 1] == 33 || inp[ind - 1] == 63 ||
			inp[ind - 1] == 34 || inp[ind - 1] == 40 ||
			inp[ind - 1] == 41 || inp[ind - 1] == 123 ||
			inp[ind - 1] == 124)
					{
						inp[ind] -= 32;
					}
		}
		ind++;
	}
	return (inp);
}
