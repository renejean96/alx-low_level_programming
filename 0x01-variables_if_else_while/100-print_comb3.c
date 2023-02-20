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
	int n, k;

	for (n = '0'; n < '9'; k++)
	{
		for (k = n + 1; k <= '9'; k++)
		{
			if (k != n)
			{
				putchar(n);
				putchar(k);

				if (n == '8' && k == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
