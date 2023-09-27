#include "lists.h"

/**
 * free_listint - This function frees the list
 *
 * @head: The beginning of the node
 *
 * Return: Gives void as output
 */

void free_listint(listint_t *head)
{
	listint_t *free_list = head;

	while (!head)
	{
		head = head->next;
		free(free_list);
	}
}
