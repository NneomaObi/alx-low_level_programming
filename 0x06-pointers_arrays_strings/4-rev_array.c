#include "main.h"
/**
* reverse_array - a function that reverse an array.
* @a: an input array
* @n: number of elements of array
* Return: Nothing
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int rev;

	while (i < n--)
	{
		rev = a[i];
		a[i++] = a[n];
		a[n] = rev;
	}
}