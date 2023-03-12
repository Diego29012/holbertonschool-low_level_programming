#include <stdio.h>
#include "main.h"
/**
* * _sqrt_recursion - Write a function that returns
* * @n: integer
* * Return: int
**/

int _sqrt_recursion(int n)
{
	return (_sqrt_(n, 1));
}

/**
* _sqrt - _sqrt_recursion
* @n: integer
* @i: integer
* Return: sqrt
**/

int _sqrt(int n, int i)
{

if (n < 0)
return (-1);
if ((i * i) > n)
return (-1);
if (i * i == n)
return (i);
return (_sqrt(n, i + 1));
}
