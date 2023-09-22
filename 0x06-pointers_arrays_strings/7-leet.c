#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int input, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (input = 0; n[input] != '\0'; input++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[input] == s1[j])
			{
				n[input] = s2[j];
			}
		}
	}
	return (n);
}
