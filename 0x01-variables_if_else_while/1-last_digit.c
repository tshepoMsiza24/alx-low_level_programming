#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - this is where the program start running
 *
 * Return:returns zero if error and non zero if no errors
*/
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	/* your code goes there */
	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else
		if (last == 0)
			printf("Lat digit of %d is %d and is 0\n", n, last);
		else
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
	return (0);
}
