
#include "main.h"

/**
 * _strncpy - copies at most
 * @a: the buffer
 * @n: the source
 * Return: a pointer
 */

 void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n -1; index >= n / 2; index--)
	{
		tmp = a[n - 1 -index];
		a[n - 1 - index] = a [index];
		a[index] = tmp;
	}
}
