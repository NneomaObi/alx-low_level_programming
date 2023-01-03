#include "main.h"
/**
* print_chessboard - a function that prints a chessboard
* @a: an array input to print
* Return: Nothing
*/
void print_chessboard(char (*a)[8])
{
	int i = 0, x;

	for (; i < 8; i++)
	{
		for (x = 0; x < 8; x++)
			putchar(a[i][x]);
		putchar('\n');
	}
}
