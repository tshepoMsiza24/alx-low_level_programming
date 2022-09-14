#include "main.h"

/**
* print_alphabet - function to print alphabet
*
*
* Return: returns void on success.
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
