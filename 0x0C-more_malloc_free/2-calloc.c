#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_memset - jfjfj
 * @s: dvgjbjbj
 * @b: ekk
 * @n: jvjj
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - start
 * @size: aaaaaa
 * @nmemb: bbbb
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *o;

	if (nmemb == 0 || size == 0)
		return (NULL);
	o = malloc(size * nmemb);
	if (o == NULL)
		return (NULL);

	_memset(o, 0, nmemb * size);
	return (o);
}
