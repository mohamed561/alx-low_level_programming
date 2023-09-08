#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 *   This program prints the alphabet in lowercase, followed by a new line,
 *   using the putchar function.
 *
 * Return:
 *   0 - Always returns 0 to indicate successful completion.
 */

int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);
}
