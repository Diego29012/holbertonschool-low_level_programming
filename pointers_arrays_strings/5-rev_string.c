#include <stdio.h>
#include "main.h"

/**
* rev_string - function to print revers
* @s: pointer
* Return: void
**/
void rev_string(char *s)
{
	char a;
	int b, c, d;

	c = 0;
	d = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	d = c - 1;

	for (b = 0; b < c / 2; b++)
	{
		a = s[a];
		s[a] = s[d];
		s[d--] = a;
	}
}

