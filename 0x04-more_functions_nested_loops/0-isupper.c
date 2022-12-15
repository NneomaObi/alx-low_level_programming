#include "main.h"
#include <stdio.h>
/**
* _isupper - Function that checks for uppercase letters
* @c: An input character
* Return: 1 if c is uppercase or 0 otherwise
*/
int _isupper(int c)
{
	char upper;
	int isupper = 0;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (c == upper)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
