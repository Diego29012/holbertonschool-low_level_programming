#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* _strlen - checks the length of a tring
* @s: string
* Return: Length
**/
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
	}
