#include <stdio.h>
#include "main.h"

/**
* print_rev - function to print reverse
* @s: pointer
* Return: 0
**/

void print_rev(char *s)
{
int x;
for (x = 0; s[x] != 0; x++)
for (x = x - 1; x >= 0; x--)
{
putchar(s[x]);
}
putchar('\n');
}
