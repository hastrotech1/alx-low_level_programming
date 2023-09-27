#include "lists.h"

/**
 * free_listint2 - This function sets head to a null
 *
 * @head: The pointer parameter
 *
 * Return: Gives 0 as output
 */

void free_listint2(listint_t **head)
{
	listint_t *y;

	if (!head)
	{
		return;
	}
	else
	{
		while (*head)
		{
			y = *head;
			*head = (*head)->next;
			free(y);
		}
	}
}
