#include "main.h"

/**
 * print alphabet ten times - Check main
 * Description: print using  _putchar function to print
 * alphabet in lowercase ten times
 * Return: Nothing to return.
 */

void print_alphabet_x10(void)
{
	char k;
	int l;

	for (k = 0; k < 10; k++)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
		_putchar('\n');
	}
}
