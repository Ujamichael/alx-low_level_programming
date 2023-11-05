#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - entry point
 * @size: size
 * nmemb: element num
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *poin;

	poin = malloc(nmemb * size);

	if (nmemb <= 0 || size <= 0)
	{
		return (NULL);
	}
	if (poin == NULL){
		return (NULL);
	}
	memset(poin, 0, (size_t)nmemb * size);
	return (poin);
}
