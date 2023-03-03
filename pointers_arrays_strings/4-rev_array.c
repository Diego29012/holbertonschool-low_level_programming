#include <stdio.h>
#include "main.h"

/**
* reverse_array - Write a function that reverses a array of integers.
* @a: the array of the integers to be reversed
* @n: the number of elements of the array
**/
void reverse_array(int *a, int n)
{
	int d;
	int k;

	for (k = n - 1; k >= n / 2; k--)
	{
		d = a[n - 1 - k];
		a[n - 1 - k] = a[k];
		a[k] = d;
	}
}
