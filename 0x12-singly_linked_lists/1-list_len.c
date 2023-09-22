#include "lists.h"

/**
 * list_len - This function returns the number of elements in a linked list
 *
 * @h: The node pointer parameter
 *
 * Return: Gives the node pointer as output
 */

size_t list_len(const list_t *h)
{
	size_t node_ptr = 0;

	while (h)
	{
		h = h->next;
		node_ptr++;
	}
	return (node_ptr);
}
