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
	while (head != NULL)
	{
		list_t *temp_n = head;

		head = head->next;
		free(temp_n->str);
		free(temp_n);
	}
}
