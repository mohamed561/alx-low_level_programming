#include <stdio.h>

/**
 * main - the main function
 *
 * Description:
 *   This program prints the alphabet in lowercase, followed by a new line,
 *   using the putchar function.
 *
 * Return: 0 - Always
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
