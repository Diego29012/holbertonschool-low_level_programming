#include "main.h"
/**
* print_last_digit -  prints the last ligit of a number
* @n: number to check
* Return: Value of the last digit
**/

int print_last_digit(int d)
{
	int last_digit = x % 10;

	if (last_digit < 0)
	{
		last_digit *= -1;
	}

	_putchar(lsat_digit + '0');
	return (last_digit);
}
