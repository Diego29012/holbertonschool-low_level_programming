#include "main.h"

/**
* _print_rev_recursion - print string in reverse with recursion
* @s: parameter to print in reverse
**/
void _print_rev_recursion(char *s)
{
		if (*s != '\0')
		{
		_print_rev_recursion(s + 1);
		putchar(*s);
		}
}
