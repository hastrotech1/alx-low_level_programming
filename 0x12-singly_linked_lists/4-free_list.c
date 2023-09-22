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
	list_t *temp_n;

	while (head == NULL)
	{
		temp_n = head->next;
		head = temp_n;
		free(head->str);
		free(head);
	}
}
