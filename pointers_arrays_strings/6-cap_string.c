#include <stdio.h>
#include "main.h"
/**
* cap_string - function that capitalize all words
* @str: string to capitalize
* Return: str
**/
char *cap_string(char *str)
{
	int k = 0;

while (str[k])
{
	 while (str[k] >= 97 && str[k] <= 122)
	 {
		 k++;
	 }
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
			str[k - 1] == '}'
			k == 0)
			str[k] -= 32;
			
		k++;
	}
return (str);
}
