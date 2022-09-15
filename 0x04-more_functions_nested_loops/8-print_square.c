#include "main.h"

/**
 * print_square - Print a square with #.
 * @size: Is the size of the square.
 *
 * Return: To the value of void..
 */
void print_square(int size)
{
int i;
int j;
i = 0;
if (size <= 0)
{
_putchar('\n');
}
else
{
while (i < size)
{
for (j = 0; j < size; j++)
{
_putchar('#');
}
i++;
_putchar('\n');
}
}
}
