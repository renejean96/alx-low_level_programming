#include "main.h"

/**
 * time table - prints times table for numbers from 0-14
 * @n: An input integer value
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i, k;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (k = 1; k <= n; k++)
				result(i * k);
			_putchar('\n');
		}
	}
}

/**
 * result - formatted characters to output
 * @n: number to format
 * Return: nothing
 */

void result(int n)
{
	if (n <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n > 9 && n <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
}
