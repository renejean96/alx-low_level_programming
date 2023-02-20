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
	char first_letter;

	for (first_letter = 'a'; first_letter <= 'z'; first_letter++)
		putchar(first_letter);

	return (0);
}
