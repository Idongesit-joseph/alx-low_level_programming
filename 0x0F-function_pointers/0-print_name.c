#include "function_pointers.h"

/**
 * print_name - gjgj
 * @name: fjfj
 * @f: gf
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
