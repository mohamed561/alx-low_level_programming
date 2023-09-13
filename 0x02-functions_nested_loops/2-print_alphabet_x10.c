#include <stdio.h>

/**
 * print_alphabet_x10 - Prints the lowercase alphabet
 * 10 times, each followed by a new line.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char letter = 'a';

		while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

		putchar('\n');
	}
}
