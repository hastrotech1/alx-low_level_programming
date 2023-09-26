#include "lists.h"

/**
 * listint_len - This function returns the number of elements in a linked list
 *
 * @h: The pointer parameter
 *
 * Return: Gives the number of elements as output
 */

size_t listint_len(const listint_t *h)
{
	size_t e_num;

	e_num = 0;

	for (e_num = 0; h != NULL; e_num++)
		h = h->next;
	return (e_num);
}
