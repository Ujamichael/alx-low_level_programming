#include "main.h"
#include <stdio.h>
/**
* _strstr - function that locate a substr
* @haystack: string
* @needle: second string
* Return: 0
*/
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *loc = haystack;
		char *j = needle;

		while (*loc == *j && *j != '\0')
		{
			loc++;
			j++;
		}
		if (*j == '\0')
			return (haystack);
	}
	return (NULL);
}
