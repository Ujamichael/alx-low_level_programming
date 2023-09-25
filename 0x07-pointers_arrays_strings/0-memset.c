#include "main.h"

/**
 * _memset - used to fill memory 
 * @*s: string to fill
 * @b: to be filled with
 * @n: byte of num  to fill the memory
 * Return: string
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
