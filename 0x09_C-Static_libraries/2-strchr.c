#include "main.h"

/**
* _strchr - begins
* @s:fill
* @c: nmbe
* Return: s
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
