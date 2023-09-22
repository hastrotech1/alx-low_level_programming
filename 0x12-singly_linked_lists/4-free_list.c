#include "lists.h"

/**
 * free_list - This function frees the linked list
 *
 * @head: The beginning
 *
 * Return: Gives the return value
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head == NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
