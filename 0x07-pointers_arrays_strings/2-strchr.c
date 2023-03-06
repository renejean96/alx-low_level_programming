#include "main.h"
#include <stdio.h>

/**
 * _strchr - a funciton that locates a character in a string.
 * @s: an input string to search in
 * @c: an nput character to locate into string s
 * Return: retuns pointer to c position
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)

		return (s);
	return (NULL);

}
