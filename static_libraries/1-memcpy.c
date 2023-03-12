#include <stdio.h>
#include "main.h"

/**
 * *_memcpy - Write a function that copies memory area
 * * @dest: dest memory area
 * * @src: source memory area
 * * @n: bytes of memoty area to fill
 * * Return: dest
 * **/
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int d;

	for (d = 0; d < n; d++)
	{
		dest[d] = src[d];
	}
	return (dest);
}
