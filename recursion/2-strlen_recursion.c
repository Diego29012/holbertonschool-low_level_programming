#include "main.h"

/**
* _strlen_recursion - calculate the lenght of a string
* @s: parameter string
* Return: an int
**/

int _strlen_recursion(char *s)
{
		if (*s != '\0')
		return (_strlen_recursion(s + 1) + 1);
		return (0);
}
