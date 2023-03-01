#include <stdio.h>
#include "main.h"

/**
* puts_half - Write a function that prints half of a string
* @str: string
**/
void puts_half(char *str)
{
	int d;
	int k = 0;

	while (str[k] != '\0')
	{
		k++;
	}
	if (k % 2 == 1)
	{
		d = (k - 1) / 2;
		d += 1;
	}
	else
	{
		d = k / 2;
	}
	for (; d < k; d++)
	{
		putchar(str[d]);
	}
		putchar('\n');
}

