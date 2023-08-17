#include "main.h"

/**
 * _isalpha - check the code.
 * @c: The checker
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
	return (1);
	}
return(0);
}           
