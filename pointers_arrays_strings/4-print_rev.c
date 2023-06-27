#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string to print in reverse
 */
void print_rev(char *s)
{
	int length = 0;


	while (s[length] != '\0')
	{
	length++;
	}

	for (s = length - 1; s >= 0; s--)
	{
	putchar(s[length]);
	}

	putchar('\n');
}
