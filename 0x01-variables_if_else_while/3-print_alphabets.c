#include <stdio.h>

/**
 *  main - Entry point
 *   return: 0
 */
int main(void)
{
	char r;
	char R;

	 for (r = 'a'; r <= 'z'; r++)
		 putchar(r);
	 for (R = 'A'; R <= 'Z'; R++)
		 putchar(R);
	 putchar('\n');
	 return (0);
}
