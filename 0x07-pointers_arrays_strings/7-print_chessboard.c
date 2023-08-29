#include "main.h"

/**
 * print_chessboard -jghg
 * @a: array
 * Return: always 0
 */

void print_chessboard(char (*a)[8])
{
	int i, n;

	for (i = 0; n < 8; n++)
	{
		for (n = 0; n < 8; n++)
			_putchar(a[i][n]);
		_putchar('\n');
	}
}
