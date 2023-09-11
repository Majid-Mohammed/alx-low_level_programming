#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'the program's description'
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpha = 0;

	/* the loop to print the  latters */
	while (alpha < 10)
	{
		putchar('0' + alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
