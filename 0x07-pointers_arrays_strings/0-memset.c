#include "main.h"

/**
 * _memset - function used to fill constant byte
 * @s: string which is filled
 * @b: byte to be filled with
 * @n: bytes of the memory area
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
