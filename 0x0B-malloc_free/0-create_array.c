#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
* create_array - a function that creates an array of chars
* and initializes it with a specific char
* @size: unsigned integer
* @c: char
* Return: a char size
**/

char *create_array(unsigned int size, char c)
{
	unsigned igned int i;
	char *ar;

	ar = malloc(size * sizeof(char));
	if (ar == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i <= size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
