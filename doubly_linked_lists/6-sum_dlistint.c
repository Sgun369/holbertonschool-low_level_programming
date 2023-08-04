#include "lists.h"
/**
 * sum_dlistint - Calculate the sum.
 * @head: Pointer to the head node
 *
 * Return: The sum of all data
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
