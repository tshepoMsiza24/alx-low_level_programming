#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: returns the 0 value and non zero if error.
 */
int main(void)
{
	char lowerCaseLetter;

	for (lowerCaseLetter = 'a'; lowerCaseLetter <= 'z'; lowerCaseLetter++)
	{
		if (lowerCaseLetter != 'e' && lowerCaseLetter != 'q')
			putchar(lowerCaseLetter);
	}
	putchar('\n');
	return (0);
}
