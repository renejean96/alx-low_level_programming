#include "main.h"

/**
 * reverse_array - a function that reverse an array.
 * @: an input array
 * @n: number of elements of array
 * Return: nothing to return
 */
void reverse_array(int *a, int n)
{
        int k = 0;
        int rev;

        while (k < n--)
        {
                rev = a[k];
                a[k++] = a[n];
                a[n] = rev;
        }
}
~
