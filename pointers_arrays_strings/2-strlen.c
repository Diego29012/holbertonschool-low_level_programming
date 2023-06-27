 #include "main.h"
/*
* _strlen - function that returns the length of a string
* @s: character
**/
	int _strlen(char *s)

	char s[100];
	int length;

	printf("Enter a string to calculate its length\n");
	gets(s);

	length = strlen(s);

	printf("Length of the string = %d\n", length);

	return (0);
}
