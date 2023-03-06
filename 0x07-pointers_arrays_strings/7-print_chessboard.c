#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - print in the terminal the chessboard
 * @a: The character to print
 *
 */
void print_chessboard(char(*a)[8])
{
	int b;
	int c;

	for (b = 0; b < 8; b++)
	{
		for (c = 0; c < 8; c++)
		{
			printf("%d",a[b][c]);
			
			if (c == 7)
				printf("\n");
		}
	}
}
