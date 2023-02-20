#include "main.h"
#include <stdio.h>
/**
* * print_to_98 - Prints all natural numbers from n to 98
* * @n:The number to start printing from
* * Return: Always 0.
**/
void print_to_98(int n)
{
if (n < 98)
{
for (n <= 98)
{
_putchar("%d", n);
if (n != 98)
{
_putchar(", ");
}
n++;
}
}
else if (n > 98)
{
for (n >= 98)
{
_putchar("%d", n);
if (n != 98)
{
_putchar(", ");
}
n--;
}
}
else
{
_putchar("98");
}
("\n");
}
