#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of two diagonals
 * @a: a square matrix of integers.
 * @size: an input integer with the size of matrix
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0, max = size * size, sum = 0, sum1 = 0;

	for (; i < max; i += size + 1)
		sum = sum + a[i];

	for (i = size - 1; i < max - 1; i = i + size - 1)

		sum1 = sum1 + a[i];
	printf("%d, %d\n", sum, sum1);
}
