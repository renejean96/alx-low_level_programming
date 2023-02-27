#include "main.h"

/**
 * rev_string - a function that reverse a string
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0, k = 0;
	char rev;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		aux = s[k];
		s[k++] = s[len];
		s[len] = rev;
	}
}
