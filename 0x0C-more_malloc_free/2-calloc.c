#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * 
 * -calloc - start
 * @size: aaaaaa
 * @nmemb: bbbb
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *o;

	if (nmemb == o || size == 0)
		return (NULL);
	o = calloc(nmemb, size);
	if (o == NULL)
		return (NULL);
	else
		return (0)
}
