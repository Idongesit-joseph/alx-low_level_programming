/* more headers goes there*/
#include <stdlib.h>
#include <time.h>
/* betty style doc for function main goes there */
/**
 *  main - getting the if statement
 *
 *  Return: finalize
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("is positive");
	else if(n = 0)
		printf ("is zero");
	else
		printf("is negative");
	return (0);
}
