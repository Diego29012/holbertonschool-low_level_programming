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
printf("Last digit of %d is %d and is greater than 5\n", c, lastd);
}
else if (lastd == 0)
printf("Last digit of %d is %d and is 0\n", c, lastd);
{
else if (lastd < 6 && lastd != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", c, lastd);
}
return (0);
}
