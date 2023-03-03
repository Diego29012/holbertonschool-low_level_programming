#include <stdio.h>
#include "main.h"
/**
* _strncat -  Write a function that concatenates two strings
* @dest: input a string
* @src: input a string
* @n: number of bytes
* Return: a pointer to the resulting string dest
**/
char *_strncat(char *dest, char *src, int n)
{
	int d = 0;
	int k = 0;
while (dest[d] != '\0')
{
d++;
}
while (src[k] != '\0' && k < n)
{
dest[d] = src[k];
d++;
k++;
}
dest[d] = '\0';
return (dest);
}
