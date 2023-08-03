#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t.
 * @h:pointer to the head of the linked list.
 *
 * Return: number of nodes.
*/
size_t print_dlistint(const dlistint_t *h)
{
	int n_c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_c++;
	}
	return (n_c);
}
