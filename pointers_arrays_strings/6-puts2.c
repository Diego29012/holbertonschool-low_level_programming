#include <stdio.h>
#include "main.h"

/**
* puts2 - Prints every other character of a string
* @str: char
* Return: void
**/
void puts2(char *str)
{
	int len, a;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (a = 0; a < len; a += 2)
	{
		puts2(str[a]);
	}
	puts2('\n');
}
