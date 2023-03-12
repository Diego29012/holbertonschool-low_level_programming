#include <stdio.h>
#include "main.h"
/**
 * * _strncpy - Write a function that copies a string
 * * @dest: input a string
 * * @src: input a string
 * * @n: number of bytes
 * * Return: dest
 * **/
char *_strncpy(char *dest, char *src, int n)
{
	int d = 0;
	for (d = 0; d < n && src[d] != '\0'; d++)
		dest[d] = src[d];
	for ( ; d < n; d++)
		dest[d] = '\0';
	return (dest);
}
