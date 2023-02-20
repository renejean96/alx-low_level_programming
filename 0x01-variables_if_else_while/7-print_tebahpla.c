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
	char first_char;

	for (first_char = 'z'; first_char >= 'a'; first_char--)
	{
		putchar(first_char);
		putchar('\n');
	}

	return (0);
}
