#include "main.h"

/**
 * factorial - returns the factorial off a number
 * @n: input
 * Return: Always 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
