#include "lists.h"

/**
 * get_nodeint_at_index - This function returns the nth node
 *
 * @head: The pointer paremeter
 *
 * @index: The index parameter
 *
 * Return: Gives the pointer to the node as output
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num_count;

	num_count = 0;

	while (head != NULL)
	{
		if (num_count == index)
			return (head);
		head = (*head).next;

		num_count += 1;
	}
	return (NULL);
}
