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
	int n, k, x;

	for (n = '0'; n < '9'; n++)
	{
		for (k = n + 1; k <= '9'; k++)
		{
			for (x = k + 1; x <= '9'; x++)
			{
				if ((k != n) != x)
				{
					putchar(n);
					putchar(k);
					putchar(x);

					if (n == '7' && k == '8')
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
