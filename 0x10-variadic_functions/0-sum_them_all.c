#include "variadic_functions.h"

/**
* sum_them_all:returns the sum of all its parameters.
* @n: last fixed parameter
* @az: arguments to func
* Return: sum of arguments
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int j, sum;
	va_list az;

	if (n == 0)
	{
		return (0);
	}

	va_start( az, n);/*last fixed param gives address*/
	sum = 0;
	for(j = 0; j < n; j++)
	{
		sum += va_arg(az, int);/*increment az to next arg */
	}
	va_end(az);

	return (sum);
}
