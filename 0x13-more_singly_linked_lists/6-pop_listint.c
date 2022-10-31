#include "lists.h"

/**
* pop_listint- deletes the head node of a listint_t
* @head: pointer to head node
* Return: head nodes data(n)
*/
int pop_listint(listint_t **head)
{
	int del = -1;
	listint_t *next_node = NULL;

	if(*head == NULL)
		return (0);
	next_node= (*head)->next;
	del = (*head)->n;

	free(*head);
	*head = next_node;

	return (del);
}
