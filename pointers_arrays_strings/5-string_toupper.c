#include <stdio.h>
#include "main.h"
/**
* string_toupper - function changes lowercase letters of a string to uppercase
* @str: the string to be changed
* Return: a pointer  o the changed string or str
**/
char *string_toupper(char *str)
{
int k = 0;
while (str[k])

{
if (str[k] >= 'a' && str[k] <= 'z')
str [k] -= 32;
k++;
}
return (str);
}
