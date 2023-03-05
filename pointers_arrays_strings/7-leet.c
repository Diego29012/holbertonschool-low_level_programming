#include <stdio.h>
#include "main.h"
/**
* leet - Encodes a string to 1337
* @str: The string to be encoded.
* Return: A pointer to the encoded string.
**/
char *leet(char *str)
{
int d = 0, k;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
while (str[d])
{
for (k = 0; k <= 7; k++)
{
if (str[d] == leet[k] ||
str[d] - 32 == leet[k])
str[d] = k + '0';
}
d++;
}
return (str);
}
