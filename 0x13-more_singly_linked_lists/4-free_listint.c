#include "lists.h"

/**
* free_listint- afunction that frees listint_t
* @head: pointer to head node of the linked list
* Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;

		free(head);
		head = tmp;
	}
}
