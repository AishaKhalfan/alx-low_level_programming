#include "lists.h"

/**
* free_list - a function that frees list_t
*
* @head: pointer to head node of the linked list
* Return: void
*/

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);

		free(head);

		head = head->next;
	}
}
