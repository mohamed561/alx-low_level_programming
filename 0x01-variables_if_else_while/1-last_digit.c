#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: Generates a random number, calculates its last digit,
 * and prints whether the last digit is greater than 5, less than 6 and not 0,
 * or equal to 0.
 *
 * Return: Always returns 0 to indicate successful completion.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
			n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
			n, n % 10);
	}

	return (0);
}
