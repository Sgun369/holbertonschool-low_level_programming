#include "lists.h"
/**
 * free_dlistint - Frees a doubly linked list.
 * @head: a poiter to the head of the list.
 *
 * Return:void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *temp;

	current = head;

	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
}
