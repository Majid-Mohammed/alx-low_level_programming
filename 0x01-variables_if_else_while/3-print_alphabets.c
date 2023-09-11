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
	char alpha = 'a';
	char alpha1 = 'A';

	/* the loop to print the  latters */
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (alpha1 <= 'Z')
	{
		putchar(alpha1);
		alpha1++;
	}
	putchar('\n');
	return (0);
}
