#include "lists.h"
/**
* print_dlistint- a function that prints all the elements of a dlistint_t list
* @h: pointer to head node
* Return: number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *last = h;

	if (h == NULL)
	{
		return (0);
	}
	while (last)
	{
		printf("%d\n", last->n);
		n++;
		last = last->next;
	}
	return (n);
}

