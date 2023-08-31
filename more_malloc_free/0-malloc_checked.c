#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - Entry Point
* @b: unsigned int
* Return: pointer d
*/
void *malloc_checked(unsigned int b)
{
	void *d;

	d = malloc(b);

	if (d == NULL)
	exit(98);
	return (d);
}
