#include <stdion.h>
#include <time.h>
#include <stdlibe.h>

/**
 * main -Entry point of program
 *
 * Program generates random number and stores in n.
 *
 * Tests if n is 0, less thsn 6 or greater 5.
 *
 * Prints result.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n,nLast;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	nLast = n % 10;

	if (nLast > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, nLast);

	else if (nLast == 0)
		printf("Last digit of %d is %d and is 0\n", n, nLast);

	else if (nLast < 6 && nLast > 0)
		printf("Last digit of %d is %d and is less 6 and not 0\n", n, nLast);

	return = 0;
}
