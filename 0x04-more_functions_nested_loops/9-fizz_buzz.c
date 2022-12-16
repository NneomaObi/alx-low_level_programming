#include "main.h"
#include <stdlib.h>

/*
* main - Entry piont
* Return: Always 0
*/
int main(void)
{
	int i;

	for (i = 1; i <= 0; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 && i % 5)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");

	return (0);
}
