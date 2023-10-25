#include "main.h"

/**
 * factorial - print facto
 * @n: int
 * Return: facto
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (n = n * factorial(n - 1));
}
