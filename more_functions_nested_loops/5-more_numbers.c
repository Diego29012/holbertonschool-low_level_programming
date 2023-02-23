#include <stdio.h>
#include "main.h"

/**
* * more_numbers - Print 10 times the numbers since 0 up to 14
* * Return: 10 times of the numbers since 0 up to 10
**/
void more_numbers(void)
{
	int d, k;

	for (d = 0; d < 10; d++)
{
	for (k = 0; k <= 14; k++)

{
	if (k > 9)
{
	putchar((k / 10) + '0');
}

	putchar((k % 10) + '0');
															}
	putchar('\n');
}

}
