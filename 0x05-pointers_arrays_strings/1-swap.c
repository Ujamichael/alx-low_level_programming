#include "main.h"

/**
 * swap_int - function
 * @a: first num
 * @b: second num
 * Return: a & b
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
