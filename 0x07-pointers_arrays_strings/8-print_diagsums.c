#include "main.h"
#include <stdio.h>
/**
* print_diagsums - a function that prints the sum of the two diagonals
* of a square matrix of integers.
* @a: a square matrix of integers
* @size: an input integer with the size of matrix
* Return: Nothing
*/
void print_diagsums(int *a, int size)
{
	int i = 0, max = size * size, sumone = 0, sumtwo = 0;

	for (; i < max; i += size + 1)
		sumone += a[i];

	for (i = size - 1; i < max - 1; i += size - 1)
		sumtwo += a[i];

	printf("%d, %d\n", sumone, sumtwo);
}
