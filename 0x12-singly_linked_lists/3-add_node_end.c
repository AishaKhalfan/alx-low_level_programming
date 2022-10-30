#include "lists.h"

/**
* add_node_end - Adds new node at the end of a list
* @head: Head of the linked list
* @str: string data to be initialized
* Return: Address of new elements(head) or
* NULL, if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);

	new->next = NULL;

	temp = *head;

	if (temp == NULL)
		*head = new;
	else
	{
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = new;

	}
	return (*head);
}
