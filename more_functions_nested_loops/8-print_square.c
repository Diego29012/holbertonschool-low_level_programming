#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: some
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			_putchar('#');
			for (j = 0; j < size - 1; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
