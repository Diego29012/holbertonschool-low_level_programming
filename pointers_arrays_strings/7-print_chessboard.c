#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - Write a function that prints the chessboard
 * @a: input pointer
 * Return: no return.
 **/
void print_chessboard(char (*a)[8])
{
	int b, d;

			for (b = 0; b < 8; b++)

{
			for (d = 0; d < 8; d++)

			{

				putchar(a[b][d]);
			}

		putchar('\n');

	}
}
