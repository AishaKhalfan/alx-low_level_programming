#include "main.h"
/* Header files go here*/
int _putchar(char c);
char a[] = "_putchar";
/**
 *  main - Print "_putchar" followed by a new line.
 *   Description: You are not allowed to include standard libraries.
 *    Return: Always 0
 */
int main(void)
{
	char a[] = "_putchar";
	int i = 0;

	while (a[i] != '\0')
	{
		_putchar(a[i]);
		i++;
	}
		_putchar('\n');
		return (0);
}
