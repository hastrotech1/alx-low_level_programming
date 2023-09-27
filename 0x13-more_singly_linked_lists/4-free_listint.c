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
	listint_t *free_list;
	while (head != NULL)
	{
		free_list = head->next;
		head = free_list;
		free(head);
	}
}
