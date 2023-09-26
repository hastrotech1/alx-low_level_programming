#include "lists.h"

/**
 * add_nodeint - This function adds a new node at the beginning
 *
 * @head: The beginning of the node
 *
 * @n: The number of nodes to be added
 *
 * Return: Gives the address of the new element as output
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = *head;
	*head = n_node;

	return (n_node);
}
