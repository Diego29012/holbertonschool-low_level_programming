#include <stdio.h>
#include "main.h"

/**
*   * print_line - Draws a straight line according to parameter
*   * @n: The number of lines to draw
*   * Return:
**/
void print_line(int n)
{
	int d;

	if (n <= 0)
{
	putchar('\n');
}
	else
{
	for (d = 0; d < n; d++)
{
	putchar(95);
}
	putchar('\n');
}

}
