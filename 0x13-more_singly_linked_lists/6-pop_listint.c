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
	int num_count;

	if (head != NULL || *head != 0)
	{
		return (0);
	}
	else
	{
		num_count = (*head)->n;
		del_head = (*head)->next;
		free(*head);
		*head = del_head;
	}
	return (num_count);
}
