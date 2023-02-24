#include <stdio.h>
#include "main.h"
/**
*  * print_triangle - Prints a triangle, using the character #.
*  * @size: The size of the triangle.
*  **/

void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
{
	putchar('\n');
}
	else
{
	for (i = 1; i <= size; i++)

{
	for (j = size - i ; j > 0; j--)
{
	putchar(' ');
}
	for (k = 0; k < i; k++)
{
	putchar('#');
}
	putchar('\n');
}
}
}
