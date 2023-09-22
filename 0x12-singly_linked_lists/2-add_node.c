#include "lists.h"

/**
 * add_node - This function adds a new node
 *
 * @head: This is the beginning of a linked list
 *
 * @str: This is the string of the linked list
 *
 * Return: Gives the address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *head_node;
	unsigned int check = 0;

	head_node = malloc(sizeof (list_t));
	if (head_node == NULL)
		return (NULL);
	head_node->str = strdup(str);

	while (str[check])
		check++;

	head_node->len = check;
	head_node->next = *head;
	*head = head_node;

	return (*head);
}
