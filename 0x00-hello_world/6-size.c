#include <stdio.h>
#include <bits/libc-header-start.h>
#include <libc6-dev-i386.h>

/**
 * main - checking the size of my computer
 *
 * Return: makes it successful
 */

gcc 6-size.c -m32 -o size32 2> /tmp/32
gcc 6-size.c -m64 -o size64 2> /tmp/64

int main(void)
{
	char b;
	int c;
	long int d;
	long long int e;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
