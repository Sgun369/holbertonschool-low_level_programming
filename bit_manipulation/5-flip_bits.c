#include "main.h"
/**
 *flip_bits - return the number of bits you would need to flip
 *		to gett from one number to another.
 *
 *@n: number to process
 *@m: nummber
 *Return: number of bits to flip.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int result = n ^ m;

	while (result)
	{
		count++;
		result &= result - 1;
	}
	return (count);
}
