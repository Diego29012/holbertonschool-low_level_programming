#include <stdio.h>
#include "main.h"

/**
* puts2 - Prints every other character of a string
* @str: char
* Return: void
**/
void puts2(char *str)
{

	while (str)
	{
	if (str  2 == 0)
	puts2(str);
	str++;
	}
	puts(10);
}
