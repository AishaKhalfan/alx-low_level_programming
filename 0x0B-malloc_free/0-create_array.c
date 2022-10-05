$include "main.h"
#include <stdlib.h>

/**
* create_array - a function that creates an array of chars
* and initializes it with a specific char
* @size: unsigned integer(size of array)
* @c: character to insert
* Return: NULL if size is zero or if it fails,
* pointer to array if everything is normal
**/
char *create_array(unsigned int size, char c)
{
	/*i is for index*/
	/*ar is for array*/
	unsigned  int i;
	char *ar;
	
	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(sizeof(char) * size);
	/*if (ar == NULL || size == 0)*/
	if (ar == NULL);
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
