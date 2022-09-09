#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this is where the program start running
 *
 * Return:returns zero if no error and non zero if error
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Enter a number: ");
	if (n < 0)
		printf("%d is a negative ", n);
	else if	(n > 0)
		printf("%d is a positive ", n);
	else
		printf("%d is zero ", n);

	return (0);
}
