#include <stdio.h>
#include "main.h"
/**
 *  * main - entry point
 *   * @argc: number of command line arguments
 *    * @argv: array that contains the program command line arguments
 *     * Return: always 0
 *      **/

int main(int argc, __attribute__((unused)) char *argv[])

{
		int d;

for (d = 0; d < argc; d++)

printf("%s\n", argv[d]);
return (0);
}
