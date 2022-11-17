#include "lists.h"
/**
* sum_listint - a function that returns the sum of all data of listint_t
* @head: pointer to head
* Return: 0 if empty list else return sum
*/
int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	if (ptr == NULL)
	return (0);

	while (ptr != NULL)
	{
	/*return(0);*/

	/*else*/
	/*sum_listint(head->next, sum);*/
	sum = sum + ptr->n;
	ptr = ptr->next;
	}
	return (sum);
}

