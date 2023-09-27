#include "lists.h"

/**
 * sum_listint - This function returns the sum of all data
 *
 * @head: The pointer to the node
 *
 * Return: Gives 0 as output
 */

int sum_listint(listint_t *head)
{
	listint_t *h;
	int add;

	add = 0;
	h = head;

	while (h)
	{
		add += h->n;
		h = h->next;
	}
	return (add);
}
