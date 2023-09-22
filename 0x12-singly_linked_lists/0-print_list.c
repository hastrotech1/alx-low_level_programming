#include "lists.h"

/**
 * print_list - This function prints all the elements of a list_t list
 *
 * @h: The node pointer
 */

size_t print_list(const list_t *h)
{
	size_t firstNode = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		firstNode++;
	}
	return (firstNode);
}
