#include "main.h"
/**
 *  main - Print "_putchar" followed by a new line.
 *   Description: You are not allowed to include standard libraries.
 *    Return: Always 0
 */
int main(void)
{
	char aisha[] = "_putchar";
	int i = 0;
	
	while (aisha[i] != '\0')
	{
		_putchar(aisha[i]);
		i++;
	}
		_putchar('\n');
		return (0);
}
