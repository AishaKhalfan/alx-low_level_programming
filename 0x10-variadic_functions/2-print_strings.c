#include "variadic_functions.h"

/**
* print_strings -func to print strings
* @separator: string to be printed between strings
* @n: number of strings passed to func
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list az;
	char *j;
	unsigned int i;

	va_start(az, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(az, char *);
		if (j == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", j);
		}
	/*printf("%d", va_arg(az, int));*/
		if (i < n - 1)
		{
			if (separator)
				printf("%s", separator);
			}
		}
		printf("\n");
		va_end(az);
}
