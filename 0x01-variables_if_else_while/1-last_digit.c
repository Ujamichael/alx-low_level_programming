#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main- entry point
 *
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int la;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	  la = n % 10;

	{

		if (la > 5)
			printf("last digit of %d is %d and is greater than 5\n", n, la);
		else if (la < 6 && la != 0)
			printf("last digit of %d is %d and is less than 6 and not 0\n", n, la);
		else
			printf("last digit of %d is %d and is 0\n", n, la);
	}
	return (0);
}
