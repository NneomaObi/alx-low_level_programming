#include "main.h"
/**
* _islower - Description
* @c: An input character
* Description: Write a function that checks for lowercase character.
* Return: 1 if is lowercase or 0 if is uppercase
*/

int _islower(int c)
{
	char r;

	int lower = 0;

	for (r = 'a'; r <= 'z'; r++)
	{
		if (r == c)
			lower = 1;

	}
	return (lower);


}

