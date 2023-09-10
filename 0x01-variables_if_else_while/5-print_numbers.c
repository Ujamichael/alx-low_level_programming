#include <stdio.h>

/**
 * main- entry point
 *
 * Return: 0
 */
int main(void)
{
	int base10;

	for (base10 = 0; base10 <= 9; base10++)
	{
		printf("%d", base10);
	}
	putchar('\n');
	return (0);
}
