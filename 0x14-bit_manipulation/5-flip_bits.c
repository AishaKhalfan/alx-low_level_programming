#include "main.h"

/**
* flip_bits-returns the number of bits you would need to flip
* to get from one number to another
* @n: integer to be flipped
* @m: integer to be flipped
* Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flips = 0;
	/**
	* & each bits of n  && m with 1
	* and store them if r1 and r2
	* if r1 != r2 then we flip that bit
	*/

	while (n > 0 || m > 0)
	{
		int r1 = (n & 1);
		int r2 = (m & 1);

		if (r1 != r2)
		{
			flips++;
		}
		/*right shifting n and m*/
		n >>= 1;
		m >>= 1;

	}

	return (flips);
}
