#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for(k = j+1; k < 10; k++)
			{
				if(i != j && i != k && j != k)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					
					if(i + j + k < 27)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	Putchar('\n');
	return (0);

			
}


