#include "main.h"
/**
 * puts_half - a function that prins of a string, followed by a new line.
 * @str: An input string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len = 0, k, n;

	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	for (k = n; k < len; k++)
		_putchar(str[k]);
	_putchar('\n');
}
