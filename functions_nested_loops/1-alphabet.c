#include <stdio.h>
/**
 *  *   * main - Prints the alphabet in lowercase
 *   *   *
 *    *   * Return: Always (Success)
 *     *   **/
int main(void)
{
	char d;

	for (d = 'z'; d >= 'a'; d--)
	putchar(d);
	putchar('\n');
	return (0);
}
