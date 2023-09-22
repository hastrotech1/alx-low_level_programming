#include "lists.h"

/**
 * add_node_end - This function adds a new node at the end of the list
 *
 * @head: The beginning of the linked list
 *
 * @str: The string to be printed
 *
 * Return: Gives the address of the new element as output
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_node, *tempo;
	unsigned int loop = 0;

	add_node = malloc(sizeof (list_t));
	if (add_node == NULL)
		return (NULL);

	add_node->str = strdup(str);

	while (str[loop])
		loop++;

	add_node->len = loop;
	add_node->next = NULL;
	tempo = *head;
	
	if (tempo == NULL)
	{
		*head = add_node;
	}
	else
	{
		while (tempo->next != NULL)
			tempo = tempo->next;
		tempo->next = add_node;
	}
	return (*head);
}
