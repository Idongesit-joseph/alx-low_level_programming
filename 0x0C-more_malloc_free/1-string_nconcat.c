#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - start
 * @s1: aaaaaa
 * @s2: bbbb
 * @n: ffjf
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *w;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[k])
		k++;
	if (n >= k)
		l = i + k;
	else
		l = i + n;

	w = malloc(sizeof(char) * l + 1);
	if (w == NULL)
		return (NULL);

	k = 0;
	while (j < l)
	{
		if (j <= i)
			w[j] = s1[j];
		if (j >= i)
		{
			w[j] = s2[k];
			k++;
		}
		j++;
	}
	w[j] = '\0';
	return (w);
}
