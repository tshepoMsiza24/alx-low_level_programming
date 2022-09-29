#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - indicates a prime number
 * @n: number
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if a num is prime
 * @n: number
 * @i: counter
 * Return: 1 if n is prime, 0 if not
 */

int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % 1 == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
