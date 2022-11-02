#include "main.h"

/**
* set_bit-sets value of a bit to 1 at given index
* @n: pointer to the integer
* @index: is the index starting from 0
* Return: 1 if it worked and -1 if error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == 0 || index > 63)
		return (-1);

	*n = (*n | (1 << index));

	return (1);
}
