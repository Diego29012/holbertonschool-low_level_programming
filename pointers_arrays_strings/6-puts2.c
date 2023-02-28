#include <stdio.h>
#include "main.h"
/**
* puts2 - print every other character of a string,
* starting with the first character
* @str: string
**/
void puts2(char *str)
{
int i;
int f = 0;

while (str[f] != '\0')
{
f++;
}
for (i = 0; i < f; i += 2)
{
putchar(str[i]);
}
putchar('\n');
}
