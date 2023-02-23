#include <stdio.h>
#include "main.h"
/**
*  * _isalpha - a function that prints the numbers, from 0 to 9, followed by a new line
*  *  @c: integer
*  * Return: 1 for alphabetic character or 0 for anything else
**/
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
{	
       	return (1);
}
	return (0);
}
