#include "main.h"

/**
 * _isalpha - Check main
 * @c: An input character
 * Description: function returns 1 otherwise the character is a
 * letter, lowercase or uppercase.
 * Return: 1 or 0 .
 */
int _isalpha(int c)
{
	char small, capital;
	int count = 0;

	for (small = 'a'; small <= 'z'; small++)
	{
		for (capital = 'A'; capital <= 'Z'; capital++)
		{
			if (c == small || c == capital)
				count = 1;
		}
	}
	return (count);
}
