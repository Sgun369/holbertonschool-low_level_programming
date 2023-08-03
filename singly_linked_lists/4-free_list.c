#include "lists.h"
/**
 * free_list - a function that frees a list_t.
 * @head: pointer to the first element.
 *
 * Retunrn: void.
*/
void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)
	{
		list_t *next_node = temp->next;

		free(temp->str);
		free(temp);
		temp = next_node;
	}
}


