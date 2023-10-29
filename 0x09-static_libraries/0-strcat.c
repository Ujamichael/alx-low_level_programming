#include "main.h"
/**
 * _strcat - concatenates two given strings
 * @dest: first string
 * @src: second string
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int cyp;
	int j;

	cyp = 0;
	while (dest[cyp] != '\0')
	{
		cyp++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[cyp] = src[j];
		cyp++;
		j++;
	}

	dest[cyp] = '\0';
	return (dest);
}
