#include <stdio.h>
#include "main.h"
/**
 * main - the main programs to print putchar
 *
 * Return:returns 0
*/
int main(void)
{
	int i = 0;
	char out[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	while (i < 8)
	{
		putchar(out[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
