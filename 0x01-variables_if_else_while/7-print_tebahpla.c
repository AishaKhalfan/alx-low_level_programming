#include <stdio.h>
/**
 *  main - prints the lowercase alphabet in reverse,
 *   followed by a new line.
 *    Return: 0
 */
int main(void)
{
	char u;

	for (u = 'z' ; u >= 'a'; u--)
		putchar(u);
	putchar('\n');
	return (0);
}
