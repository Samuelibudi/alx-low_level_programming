#include<unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1
 */
int main(void)
{
	char strpt[] = "and that piece of art is useful\" - Dora korpar, 2015-10-19\n";

	write(2, strpt, 59);
	return(1);
}
