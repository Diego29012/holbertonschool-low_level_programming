#include "main.h"
#include <stdio.h>
/**
* * times_table - Prints the 9 times table, starting with 0.
* * Return: times table
* **/
void times_table(void)
{
int num, mult, table;

for (num = 0; num <= 9; table++)
{
table = (num * mult);
_putchar('0');
_putchar(',');
_putchar(' ');
for (mult = 1; mult <= 9; mult++)
{
prod = (num * mult);
if ((table / 10) > 0)
{
_putchar((table / 10) + '0');
}
else
_putchar(' ');
}
_putchar ((table % 10) + '0');
if ((mult < 9)
{
putchar(',');
_putchar(' ');
_putchar('\n');
}
}
}
