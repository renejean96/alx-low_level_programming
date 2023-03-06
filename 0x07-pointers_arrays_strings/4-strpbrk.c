#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - a funciton that searches a string for any of a set of bytes.
 * @s: an input string
 * @accept: an input character with to locate into string s
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * or null if such byte is found
 */
char *_sttrpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = start;
		s++;
	}
	return (NULL);
}
