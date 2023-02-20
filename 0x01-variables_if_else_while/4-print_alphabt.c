#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char first_char, e, q;

	e = 'e';
	q = 'q';

	for (first_char = 'a'; first_char <= 'z'; first_char++)
	{
		if (first_char != e && first_char != q)
			putchar(first_char);
	}
	putchar('\n');

	return (0);
}

