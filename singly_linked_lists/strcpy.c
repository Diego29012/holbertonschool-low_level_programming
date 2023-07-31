#include "lists.h"
/**
*_strcpy -  function that copies the string
* @src: pointer to the strign
* @dest: string copy destination
* Return: returns copied string
**/
char *_strcpy(char *dest, const char *src)
{
		char *copy = dest;

		while ((*copy++ = *src++) != '\0')
		;
		return (dest);
}
