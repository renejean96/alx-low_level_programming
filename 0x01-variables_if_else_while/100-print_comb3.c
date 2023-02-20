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
	int n = '0', k;

	while (n < '9')
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

		k++;

	}

	putchar('\n');

	return (0);
}
