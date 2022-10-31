#include "lists.h"

/**
* get_nodeint_at_index- returns the nth node of a listint_t linked list.
* @head: pointer to first node
* @index: index of the node starting at 0
* Return: the nth node of list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;

	unsigned int i;

	for (i = 0; i < index && tmp != NULL; i++)
	{
		tmp = head->next;
		
		head = tmp;
	}
	return (head);
}
