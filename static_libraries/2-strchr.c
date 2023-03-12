#include <stdio.h>
#include "main.h"

/**
 * * _strchr - Write a function that locates a character in a string
 * * @s: The string to be searched
 * * @c: The character to be located
 * * Return: a pointer to the first occurrence of the character c in the string s
 * **/
char *_strchr(char *s, char c)
{
		int k;

			for (k = 0; s[k] >= '\0'; k++)
			{
						if (s[k] == c)
										return (s + k);
			}
				return ('\0');
}
