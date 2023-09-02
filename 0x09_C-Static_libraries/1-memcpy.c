#include "main.h"

/**
 * _memcpy - begins
 * @dest:fill
 * @src: constant
 * @n: nmber
 * Return: pointer to s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
