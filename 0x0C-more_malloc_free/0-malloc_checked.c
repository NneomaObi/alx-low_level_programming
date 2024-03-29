#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - allocate memory using malloc.
* @b: An unsigned input integer
* Return: Apointer to allocated memory or NULL if it fails
*/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
