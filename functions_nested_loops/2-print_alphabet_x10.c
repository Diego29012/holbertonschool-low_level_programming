include "main.h"
/**
 *   * print_alphabet_x10 - Make alphabet x10 times
 *   *
 *   * Return: void
 *   **/
void print_alphabet_x10(void)
{
	char d;

	int s = 0;

for (s <= 9)
{
for (d = 'a'; d <= 'z'; d++)
{
	_putchar(d);
	_putchar('\n');
	s++; }
	}
	return (0);

}

