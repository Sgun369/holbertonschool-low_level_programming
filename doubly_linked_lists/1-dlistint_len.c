#include "lists.h"
/**
 * dlistint_len - a function that returns the number of elements in a dl_list.
 *
 * @h:a pointer to the head of the linked list
 *
 * Return: number of nodes.
*/
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
	count++;
	h = h->next;
	}
	return (count);
}
