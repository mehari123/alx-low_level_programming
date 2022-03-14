#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpa = 'a';

	while (alpa <= 'z')
	{
		putchar(alpa);
		putchar('\n');
		alpa++;
	}
	return (0);
}
