#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in revers,
 * @s: an input strint to printing
 * Return: Nothing to return
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
