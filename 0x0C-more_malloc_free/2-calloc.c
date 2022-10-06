#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory of an array using malloc.
 * @nmemb: number of elements in array.
 * @size: size of elements of array.
 * Reurn: NULL is size or nmemb == 0.
 * NULL if malloc fails.
 * pointer to memory allocated if successful.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *q;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	q = malloc(nmemb * size);
	if (q == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(q) + i) = 0;
	}

	return (q)
}
