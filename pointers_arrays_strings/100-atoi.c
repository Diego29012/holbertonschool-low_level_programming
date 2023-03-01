#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
* _atoi - Write a function that convert a string to an integer
* @s: integer
* Return: always 0
**/
int _atoi(char *s)
{
 int i;
 int n;
 int minus = 0;
 int convert;
 int s = strlen(s);
 for (i = 0; i < s; i++)
 {
	 if(s[i] == '-')
	 {
		 minus++;
	 }
	 if(s[i] >= 48 && s[i] <= 57)
	 {
		 break;
	 }
 }
 while(s[i] >= 48 && s[i] <= 57)
 {
	 convert = (((int)s[i]) - '0');
	 n *= 10;
	 n +=  convert;
	 i++;
 }
 if(minus % 2 == 0)
 {
	 return (n);
 }
 else
 {
	 return (-n);
 }
}

