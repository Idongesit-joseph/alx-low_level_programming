#include "main.h"

/**
 * set_bit - start
 * @n: ssss
 * @index: ddd
 * Return: 0
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	mask = 1;
	mask = mask << index;
	*n = ((*n) | mask);
	return (1);
}
