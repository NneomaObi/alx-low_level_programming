#include "main.h"

/**
* _isalpha - Description
* @c: An input character
* Function checks for alphabetic character in lower and uppercase
* Return: 1 or 0 in otherwise.
*/

int _isalpha(int c)
{
	char lower, upper;

	int score_letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if ( c == lower || c == upper)
				score_letter = 1;

		}

	}

	return (score_letter);
}
