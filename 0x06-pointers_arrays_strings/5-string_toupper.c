#include "main.h"
/**
 * string_toupper - a function that changes all lowercase letter to upper case
 * @s: an input string
 * Return: char pointer to string
 */
char *string_toupper(char *b)
{
	char *begin = b;

	while (*b)
	{
		if (*b >= 'a' && *b <= 'z')
			*b -= 32;
		b++;
	}
	return (begin);
}

