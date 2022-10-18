#include "variadic_functions.h"

/**
* print_numbers - func to print numbers
* followed by a line
* @separator: string to be printed between lines
* @n: number of integers passed to the function
*
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list az;
	unsigned int i;

	va_start(az, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(az, int));
		if (i != n - 1)
		{
			if (separator)
				printf("%s", separator);
			}
		/*num += va_arg(az, unsigned int);*/
	}
	printf("\n");
	va_end(az);
}
