#include <stdio.h>

/**
 * main- entry point
 *
 * Return: 0
 */
int main(void)
{
	char integer;
	char character;

	for (integer = 48; integer <= 57; integer++)
		putchar(integer);
	for (character = 'a'; character <= 'f'; character++)
		putchar(character);
	putchar('\n');
	return (0);
}
