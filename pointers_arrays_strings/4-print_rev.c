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

for (x = 0; s[x]; x++)
{
;
}
for (x = x -1; s[x]; x--)
{
putchar(s[x]);
}
putchar('\n');
}

