#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: pointer to int
 * @b: pointer to int
 * Return: void
 **/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

