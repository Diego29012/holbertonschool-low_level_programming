#include <stdio.h>
#include "main.h"
/**
 *  * _strcpy - Copy a string
 *   * @dest: Destination
 *    * @src: Source
 *     * Return: dest
    **/
char *_strcpy(char *dest, char *src)
{
	char *d = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (d);
}
