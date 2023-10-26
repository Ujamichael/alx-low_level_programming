#include "main.h"
/**
 * check - checks for the square root
 * @root:int
 * @num:int
 * Return: int
 */
int check(int root, int num)
{
	if (root * root == num)
		return (root);
	else if (root * root > num)
		return (-1);
	else
		return (check(root + 1, num));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else
		return (check(1, n));
}
