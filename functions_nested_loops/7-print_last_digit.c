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
lastd = c % 10;
if (lastd > 5)
{
printf("Last digit of %d \n", c, lastd);
}
else if (lastd == 0)
printf("Last digit of %d \n", c, lastd);
{
else if (lastd < 6 && lastd != 0)
printf("Last digit of %d \n", c, lastd);
}
return (0);
}
