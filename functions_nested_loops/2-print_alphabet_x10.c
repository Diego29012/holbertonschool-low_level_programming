#include "main.h"
/**
* print_alphabet_x10 - Prints the alphabet in lowercase
*
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char abc;
	int d;

	for (d = 0 ; d <= 9 ; d++)
	{
		for (abc = 'a' ; abc <= 'z' ; abc++)
		{
			_putchar(abc);
		}

		_putchar('\n');
	}
}
