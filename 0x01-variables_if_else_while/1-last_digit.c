#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints last digit of randomly generated number.
 * and whether it is greater than 5 or less than 6, or 0.
 * Return: Always 0
 */
int main(void)
{
	int a;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;

	if (a > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("Last digit of %d is %d is 0\n", n, a);
	}
	else
	{
		printf("Last digit of %d is %d is and is less than 6 and not 0\n", n, a);
	}
	return (0);
}
