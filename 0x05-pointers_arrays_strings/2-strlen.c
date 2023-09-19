#include "main.h"

/**
 * _strlen - function to count lenght
 * @s: string
 * Return: 0
 */
int _strlen(char *s)
{
	int strlen = 0;

	while (*s != '\0')
	{
		strlen++;
		s++;
	}
	return (0);
}
