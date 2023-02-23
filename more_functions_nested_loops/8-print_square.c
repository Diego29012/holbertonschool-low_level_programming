#include "stdio.h"
#include "main.h"
/**
* * print_square - print a square
* * @size: integer
* * Return: void
**/
void print_square(int size)
{
	int d, k;

	if (size > 0)
{
	for (d = 0; d < size; d++)
{
	for (k = 0; k < size; k++)
{

	putchar('#');

	putchar('\n');
}
}
}
}
