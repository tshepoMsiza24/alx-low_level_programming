#include "main.h"

/**
 * _strlen_recursion - function for string length
 * @s: input
 * Return: Always 0
 */

int _strlen_recursiom(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 * _strlen_recursion(s + 1));
}

