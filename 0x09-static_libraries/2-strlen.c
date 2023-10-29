#include "main.h"
/**
 * _strlen - function to count lenght
 * @s: string
 * Return: stlen
 */
int _strlen(char *s)
{
	int stlen = 0;

	while (*s != '\0')
	{
		stlen++;
		s++;
	}
	return (stlen);
}
