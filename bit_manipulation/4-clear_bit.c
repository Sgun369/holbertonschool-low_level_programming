#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n:number to manipulate.
 * @index: index to to execute process at.
 *
 * Return: 1 on success -1 att failure.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1 << index);
		return (1);
}
