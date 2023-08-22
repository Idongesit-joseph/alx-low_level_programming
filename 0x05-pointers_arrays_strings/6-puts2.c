#include "main.h"

/**
 * puts2 -<F12> function should print only bone character out of the two
 * startingt with the first one
 * @str: input
 * Return: print
 */

void puts(char *str)
{
	int longi = 0;
	int t = 0;
	int o;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[0]);
	}
	}
	_putchar('\n');
