#include "lists.h"
/**
 * free-list - a function that frees a list_t.
 * @head: pointer to the first element.
 *
 * Retunrn: void.
*/
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *temp = head;

		head = head->next;
		free(temp);

	}
}

