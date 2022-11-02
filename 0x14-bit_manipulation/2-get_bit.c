#include "main.h"
/**
* get_bit - Returns the value of a bit at a given index.
*
* @n: unsigned long int decimal.
* @index: Index of the bit
* Return: Value of the bit.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int mask  = n >> index;

	if (index > 63)
		return (-1);

	return (mask & 1);
}
