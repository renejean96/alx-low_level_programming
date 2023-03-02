#include "main.h"
/**
 * string_toupper - a function that changes all lowercase letter to upper case
 * @s: an input string
 * Return: char pointer to string
 */
char *string_toupper(char *s)
{
	char *begin = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (begin);
}

