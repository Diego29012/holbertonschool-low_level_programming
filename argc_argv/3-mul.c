#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argv: argument vector for values
 * @argc: argument count
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc > 2)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
