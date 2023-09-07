#include "main.h"
#include <stdlib.h>

/**
 * create_array - start
 * @size: aaaaaa
 * @c: bbbb
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	return (a);
}
