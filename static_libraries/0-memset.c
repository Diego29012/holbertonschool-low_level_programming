#include <stdio.h>
#include "main.h"

/**
 *  *_memset - Write a function that fills memory with a constant byte
 *   * @s: memory area to fill
 *    * @b: constant byte to fill
 *     * @n: bytes of memoty area to fill
 *      * Return: a pointer to the memory area s
 *      **/
char *_memset(char *s, char b, unsigned int n)
{
		unsigned int d;

		for (d = 0; d < n; d++)
				{
					s[d] = b;
						}
			return (s);
}
