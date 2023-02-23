#include <stdio.h>
#include "main.h"
/**
*  * print_numbers - that prints the numbers, from 0 to 9
*  * @c: character
*  * Return: always 0
*  **/
void print_numbers(void)
{
	char c = '0'

	for (c <= '9'; c++)
{
	_putchar (c);
}
	_putchar ('\n');
}
