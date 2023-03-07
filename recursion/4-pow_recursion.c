#include <stdio.h>
#include "main.h"
/**
* _pow_recursion - Write a function that returns
* @x: Value
* @y: value
* Return: -1 if is lower than 0
**/

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y <= 0)
return (1);
else
return (x * _pow_recursion(x, y - 1));
}
