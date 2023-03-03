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
while (str[++k])
{
while (!(str[k] >= 'a' && str[k] <= '<'))
k++;
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
str[k] -= 32;
}
return (str);
}
