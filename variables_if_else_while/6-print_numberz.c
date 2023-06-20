#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 starting from
 * Return: always 0
 **/
int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
printf((i % 10) + '0');
}
printf("\n");
return (0);
}
