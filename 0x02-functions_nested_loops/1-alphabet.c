#include "main.h"

/**
 * print_alphabet - View description
 * Description: prints the alphabet in lowercase from a-z fallowed by a new line
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
		_putchar(k);
	_putchar('\n');
}
