#include "main.h"

/**
 * _islower - Check main
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase
 * Return: 1 if is lowercase otherwise 0
 */
int _islower(int c)
{
	char k;
	int small = 0;

	for (k = 'a'; k <= 'z'; k++)
	{
		if (k == c)
			small = 1;
	}

	return (small);
}
