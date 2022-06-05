#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';
	char Alpha = 'A';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (Alpha = 'A'; Alpha <= 'Z'; Alpha++)
	{
		putchar(Alpha);
	}
	putchar('\n');
	return (0);
}
