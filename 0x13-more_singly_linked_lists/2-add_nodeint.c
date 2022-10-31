#include "lists.h"

/**
* add_nodeint- adds new node at beginning of list
*@head: first list of linked list
* @n: integer to initiate in the list
* Return: Address of new element or
* NULL if failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	new->next = (*head);
	(*head) = new;

	return (*head);
}
