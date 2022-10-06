#include <stdlib.h>
#include "main.h"
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
        if (ar == NULL)
        {
                return (NULL);
        }
	i = 0;
	while (i < size)
        {
                ar[i] = c;
		i++;
        }
	ar[i] = '\0';
        return (ar);
}
