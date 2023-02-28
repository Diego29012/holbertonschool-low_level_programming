#include <stdio.h>
#include "main.h"

/**
* print_rev - function to print reverse
* @s: pointer
* Return: no return
**/

void print_rev(char *s)
{
int x = 0;
while (s[x] != 0)
{
x++;
}
while (s[x] > 0)
{
x--;
putchar(s[x]);
}
putchar('\n');
}
