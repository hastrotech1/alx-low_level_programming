#include "lists.h"

/**
 * print_listint - This function prints all elements in this program
 *
 * @h: The pointer parameter
 *
 * Return: Gives the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t element;

	for (element = 0; h != NULL; element++)
	{
		printf("%d\n",h->n);
		h = h->next;
	}
	return (element);
}
