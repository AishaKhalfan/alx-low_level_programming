#include "lists.h"

/**
* print_listint- function that prints all elements of listint_t
*
* @h: pointer to head node
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
	/*if((h->n) ==  NULL)*/
	printf("%d\n", h->n);
	h = h->next;
	i++;
	}
	return (i);

}
