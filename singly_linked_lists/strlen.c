#include "lists.h"
/**
* _strlen - returns the length of a string
* @s: pinter to addres os strign
* Return: all elements of the stirng
**/
int __strlen(const char *s)
{
		int count = 0;

		for (; s[count]; count++)
		;
		return (count);
}
