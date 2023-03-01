#include "main.h"

/**
 * _strncpy - a function that copys the strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int srcln = 0, k = 0;
	char *tmp = dest, *begin = src;

	while (*src)
	{
		srcln++;
		src++;
	}
	srcln++;

	if (n > srcln)
		n = srcln;
	src = begin;

	for (; k < n; k++)
		*dest++ = *src++;

	return (tmp);

}
