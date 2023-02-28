#include <stdio.h>
#include "main.h"

/**
* puts2 - Prints every other character of a string
* @str: char
* Return: void
**/
void puts2(char *str)
{
	int d = 0;

	while (*str)
	{
	if (*str % 2 == 0)
	puts(*str);
	str++;
	}
	puts('\n');
}
