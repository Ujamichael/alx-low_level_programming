#include "main.h"
/**
* print_chessboard - function that print chessboard
* @a: array
* Return: 0
*/

void print_chessboard(char (*a)[8])
{
	int i, ar2;
	
	
	for (i = 0; i < 8; i++)
	{
		for (ar2 = 0; ar2 < 8; ar2++)
			_putchar(a[i][ar2]);
		_putchar('\n');
	}
}
