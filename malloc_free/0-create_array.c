#include <stdio.h>
#include <stdlib.h>

/**
* create_array - creates an array of chars
* @size: The size of the array to be initiliazed.
* @c: char to initialize the array
* Return: Pointer
**/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	return (NULL);

	for (i = 0 ; i < size ; i++)
	{
	array[i] = c;
	}

	return (array);
}
