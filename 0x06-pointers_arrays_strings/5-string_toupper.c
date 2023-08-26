#include "main.h"

/**
 * _strncpy - copies at mos
 * @str: the source
 * Return: a pointer
 */

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		str[index] -= 32;
		index++;
	}
	return (str);
}	
