#include <stdio.h>
/**
 *  main - This prints numbers 0-9 not using char, printf or puts
 *   we only using putchar twice
 *    Return: 0 if successful
 */
int main(void)
{
	int a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
