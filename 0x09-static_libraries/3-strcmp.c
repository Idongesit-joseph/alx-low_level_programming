#include "main.h"

/**
 * _strncpy - copies at most
 * @s1: the buffer
 * @s2: the source
 * Return: a pointer
 */

int _strcmp(char *s1, char *s2)
{
        while (*s1 && *s2 && *s1 == *s2)
        {
                s1++;
                s2++;
        }
        return (*s1 - *s2);
}
