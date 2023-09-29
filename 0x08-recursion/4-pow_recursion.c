#include "main.h"

/**
 * _pow_recursion - function that return the mul power of a number
 * @x: integer number
 * @y: power raised to integer number x
 * Return: number
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
