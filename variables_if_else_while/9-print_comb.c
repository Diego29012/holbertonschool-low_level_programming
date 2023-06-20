#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: always 0
 **/

int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
	putchar((x % 10) + '0');

	if (x < 9)
	{
	putchar(',');
	putchar(' ');
	}
	}

	putchar('\n');
	return (0);
}
