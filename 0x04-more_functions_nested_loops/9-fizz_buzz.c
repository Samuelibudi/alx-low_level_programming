#include <stdio.h>

/**
 * main - prints numbers from 1 to 100.
 * Replaces multiples of 3 with fizz.
 * Replaces multiples of 5 with Buzz.
 * Replaces mutiples of 3 and 5 with FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	i = 1;
	printf("%d", i);

	for (i = 2; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) != 0)
			printf(" Fizz");
		else if ((i % 3) != 0 && (i % 5) == 0)
			printf(" Buzz");
		else if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz ");
		else
			printf(" %d", i);
	}
	printf("\n");

	return (0);
}
