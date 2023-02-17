#include "main.h"
#include <stdio.h>
/**
* *  print_last_digit - check the code
* *  @c: integer
* *  Return: Always c
**/
int print_last_digit(int c)
{
int lastd;
lastd = n % 10;
if (lastd < 0)
{
lastd = lastd * -1;
}
_putchar(lastd + '0');
return (lastd);
}
