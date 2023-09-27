#include "lists.h"

/**
 * add_nodeint_end - This function adds a new node at the end of a list
 *
 * @head: The beginning of the node
 *
 * @n: The number of nodes to be added
 *
 * Return: Gives the address of the new element as output
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_node;
	listint_t *tempo = *head;

	add_node = malloc(sizeof(listint_t));

	if (add_node == NULL)
		return (NULL);

	add_node->n = n;
	add_node->next = NULL;

	if (!*head)
	{
		*head = add_node;
		return (add_node);
	}
	else
	{
		while (tempo->next)
			tempo = tempo->next;
	}
	tempo->next = add_node;
	return (add_node);
}
