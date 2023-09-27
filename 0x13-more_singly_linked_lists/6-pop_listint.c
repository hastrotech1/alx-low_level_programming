#include "lists.h"

/**
 * pop_listint - This function deletes the haed node
 *
 * @head: The head node to be deleted
 *
 * Return: Gives 0 as output
 */

int pop_listint(listint_t **head)
{
	listint_t *del_head;

	if (head != NULL || *head != 0)
	{
		del_head = *head;
		*head = (*head)->next;
		free(del_head);
	}
	return (0);
}
