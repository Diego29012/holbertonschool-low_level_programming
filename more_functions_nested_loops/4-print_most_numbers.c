#include <stdio.h>
#include "main.h"

/**
* * print_most_numbers - a function that prints the numbers, from 0 to 9
* * Description: Prints the numbers excluding 2 and 4
* * Return: numbers 1 or 0
**/

void print_most_numbers(void)
{
	int x = 0;

	for (; x <= 9; x++)
{
	if (x == 2 || x == 4)
{
	continue;
}
	else
{
	putchar(x + '0');
}

}
	putchar('\n');
}
