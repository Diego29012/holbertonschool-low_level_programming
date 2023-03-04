#include <stdio.h>
#include "main.h"
/**
* cap_string - function that capitalize all words
* @str: string to capitalize
* Return: Capitalize string
**/
char *cap_string(char *str)
{
	int k = 0;

while (str[k])
{
	if (str[k] >= 97 && str[k] <= 122)
	{
		if (str[k - 1] == ' ' ||
			str[k - 1] == '\t'    ||
			str[k - 1] == '\n'    ||
			str[k - 1] == ','     ||
			str[k - 1] == ';'     ||
			str[k - 1] == '.'     ||
			str[k - 1] == '!'     ||
			str[k - 1] == '?'     ||
			str[k - 1] == '"'     ||
			str[k - 1] == '('     ||
			str[k - 1] == ')'     ||
			str[k - 1] == '{'     ||
			str[k - 1] == '}')
		{
			str[k] -= 32;
		}
}
k++;
}
return (str);
}
