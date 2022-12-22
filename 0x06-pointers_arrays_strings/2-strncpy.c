#include "main.h"
/**
* _strncpy - a function that copys the strings.
* @dest: an input string
* @src: an input string
* @n: an input integer
* Return: A pointer to the resulting string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int srclength = 0, i = 0;
	char *copied = dest, *start = src;
	while (*src)
	{
		srclength++;
		src++;
	}
	srclen++;
	if (n > srclen)
		n = srclength;
	src = start;
	for (; i < n; i++)
		*dest++ = *src++;
	return (copied);
}
