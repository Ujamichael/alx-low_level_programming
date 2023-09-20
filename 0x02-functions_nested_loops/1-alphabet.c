#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - entry point
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)

		putchar(x);
	putchar('\n');
}
