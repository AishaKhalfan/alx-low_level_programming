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
	/*input some numbers and store them in some variable n */
	int bitstatus;
	/*
	* input bit position and store it in varaible index
	* to get the nth bit of n, right shift n index times
	* then perform bitwise AND with 1
	*/
	bitstatus = (n >> index) & 1;

	if (index > 63)
		return (-1);

	return (bitstatus);
}
