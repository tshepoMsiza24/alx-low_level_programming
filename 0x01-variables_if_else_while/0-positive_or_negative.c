#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Enter a number: ");
	scanf("%If", &n);
	if (n < 0)
		printf("is a negative");
	else if	(n > 0)
		printf("is a positive");
	else
		printf("is zero");

	return (0);
}
