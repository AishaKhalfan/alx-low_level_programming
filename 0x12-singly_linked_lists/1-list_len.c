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

/**
* _strlen - Returns length of a string.
*
* @s: input string.
* Return: length of string.
*/
int _strlen(const char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}
