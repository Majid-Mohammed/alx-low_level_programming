#include <stdio.h>
#include <stdlib.h>
/**
 * main - A program that prints all the numbers of base 16.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;
	int num;

	/*my code */
	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
