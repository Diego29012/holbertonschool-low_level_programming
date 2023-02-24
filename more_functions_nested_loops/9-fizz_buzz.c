#include <stdio.h>
#include "main.h"

/**
* * main - function Fizz Buzz
* * Return: always 0
**/
int main(void)
{ int d;

	for (d = 1; d <= 100; d++)

	{
		if (d % 3 == 0 && d % 5 == 0)
		{
		putchar (" FizzBuzz ");
		}
		else if (d % 3 == 0)
		{
		puthcar (" Fizz ");
		}
		else if (d % 5 == 0)
		{
		putchar ("Buzz");
		}
		else
		{
		putchar ("%d", d);
		}
		putchar ("\n");

		return (0);
}
