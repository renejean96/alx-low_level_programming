#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int srcln = 0, k = 0;
	char *tmp = dest, *begin = src;

	while (*src)
	{
		srcln++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srcln)
		n = srcln;

	src = begin;

	for (; k < n; k++)
		*dest++ = *src++;

	*dest = '\0';
	return (tmp);
}
