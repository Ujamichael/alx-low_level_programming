#include "main.h"
/**
 * binary_to_uint - converts binary to int
 * @b: binary container
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0;
	int n;

	if (!b)
	{
		return (0);
	}
	for (n = 0; b[n]; n++)
	{
		if (b[n] < '0' || b[n] > '1')
		{
			return (0);
		}
		ans = 2 * ans + (b[n] - '0');
	}
	return (ans);
}
