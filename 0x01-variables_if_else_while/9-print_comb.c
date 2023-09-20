#include <stdio.h>

/**
 * main- entry point
 *
 * Rweturn: 0
 */
int main(void)
{
	char i;

		for (i = 48; i <= 57; i++)
		{
			putchar(i);
			if (i != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
		return (0);
}
