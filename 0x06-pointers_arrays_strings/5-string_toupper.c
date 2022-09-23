#include "main.h"

/**
* *string_toupper - changes all lowercase letters of a string to uppercase
* @str: string
* Return: string
**/

char *string_toupper(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] >= 'a' && str[j] <= 'z')
		{
			str[j] = str[j] - 32;
		}
	}
	return (str);
}
