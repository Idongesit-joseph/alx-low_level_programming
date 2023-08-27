#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - umui799999999999
 * Return: aa8idudydyoi
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 5)
		printf("Last digit of %d is, and is greater than 5", n);
	else if (n == 0)
		printf("Last digit of %d is, and is 0", n);
	else if (n < 6 && n != 0)
		printf("Last digit of %d is, and is less than 6 and not", n);
	printf("\n");
	return (0);
}
