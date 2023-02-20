#include "main.h"
#include <stdio.h>
/**
* * print_to_98 - Checks for alphabetic character
* * @n: integer
* * Return: Always 0
* **/
void print_to_98(int n)
if (n < 98)
{
for (n <= 98)
{
_putchar("%d", n);
if (n != 98)
{
_putchar(",");
}
n++;
}
else if (n > 98)
{
for (n >= 98)
{
_putchar("%d", n);
if (n != 98)
{
printf(",");
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
