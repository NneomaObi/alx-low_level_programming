#include "main.h"
/**
* int _islower - Descriptiom
* Description: Write a function that checks for lowercase character.
* Return 1 if lowercase otherwise 0
*/

int _islower(int c)
{
	char r;

	int lower = 0;

	for (r = 'a'; r <= 'z'; r++)
	{
		if (r == c)
			lower == 1;

	}
	return (lower);


}

