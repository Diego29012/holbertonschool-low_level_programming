#include <stdio.h>
#include "main.h"
/**
 *_strspn - Write a function that gets the length of a prefix substring
 * @s: the string to be searched
 *@accept: accept string
 * Return: the number of bytes in the initial segment of s
 **/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
{
	b = 0;
		while (s[b] != 32)
{
			if (accept[a] == s[b]
{
t++;
}

b++;

}

a++;

}
return (t);
}
