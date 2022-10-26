#include "lists.h"

/**
* list_len - returns number of elements in list_t list
* @h: singly linked list
* Return: number of elements(i)
*/
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		/*printf("%d\n", h->len);*/
		h = h->next;
		i++;
	}
	return (i);
}
