/**
 * rev_string - reverses a string
 *
 * @s: string parameter input
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int len, i;
	char ch;

	/*find string length without null char*/
	for (len = 0; s[len] != '\0'; ++len)
		;

	/*swap the string by looping to half the string*/
	for (i = 0; i < len / 2; ++i)
	{
		ch = s[i];
		s[i] = s[len - 1 - i]; /*-1 because the array starts from 0*/
		s[len - 1 - i] = ch;
	}
}
