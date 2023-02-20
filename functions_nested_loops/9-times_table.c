#include "main.h"
#include <stdio.h>
/**
*  * times_table - Prints the 9 times table, starting with 0.
*  **/
void times_table(void)
{
int num, mult, table;
for (num = 0; num <= 9; num++)
{
_putchar('0');
for (mult = 1; mult <= 9; mult++)
{
_putchar(',');
_putchar(' ');
if (table <= 9)
_putchar(' ');
else
_putchar((table / 10) + '0');
_putchar((table % 10) + '0');
}
_putchar('\n');
}
}
