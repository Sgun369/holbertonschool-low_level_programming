#include "lists.h"
/**
 * list_len - returns the number of element in a liked list_t
 * @h:const list
 *
 * Return: number of elements
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
