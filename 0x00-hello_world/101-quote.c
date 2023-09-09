#include <stdio.h>

/**
 * main- putchar
 *
 * Return: 1
 */

int main(void)
{
	const char *c = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;

	for (i = 0; c[i] != '\0'; i++)
		putchar(c[i]);
	putchar('\n');
	return (1);
}
