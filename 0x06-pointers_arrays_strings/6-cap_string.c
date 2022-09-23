#include "main.h"

/**
* *cap_string - a function that capitalizes all words of a string
* @str: string
* Return: string
**/

char *cap_string(char *str)
{
	int j = 1;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;

	while (str[j] != '\0')
	{
		if ((str[j - 1] == ' ' || str[j - 1] == '\t'
		     || str[j - 1] == '\n' || str[j - 1] == ',' || str[j - 1] == ';'
		     || str[j - 1] == '.' || str[j - 1] == '!' || str[j - 1] == '?'
		     || str[j - 1] == '"' || str[j - 1] == '(' || str[j - 1] == ')'
		     || str[j - 1] == '{' || str[j - 1] == '}')
		     && (str[j] >= 'a' && str[j] <= 'z'))
		{
			str[j] = str[j] - 32;
		}
		j++;
	}
	return (str);
}
