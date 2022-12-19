#include "arithmetic.h"

void connect()
{
	printf("Connected to C extension...\n");
}
int randint()
{
	int randN = rand() % 111 + 1;
	return randN;
}
/*ADD TWO NUMBERS*/
int add(int a, int b)
{
	int cops = a + b;
	return cops;
}
/*SUBTRACT TWO NUMBERS*/
int sub(int a, int b)
{
	int cops = a - b;
	return cops;
}
/*MULTIPLY TWO NUMBERS*/
int mul(int a, int b)
{
        int cops = a * b;
        return cops;
}
/*DIVIDE TWO NUMBERS*/
int Div(int a, int b)
{
        int cops = a / b;
        return cops;
}
/*MODULUS OF TWO NUMBERS*/
int mod(int a, int b)
{
        int cops = a % b;
        return cops;
}

