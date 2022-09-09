#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: returns 0 if not returns an error.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
