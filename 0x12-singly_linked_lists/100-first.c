#include <stdio.h>

void myfirst(void)__attribute__((constructor));
/**
* myfirst - function that prints something before main
*/

void myfirst(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
