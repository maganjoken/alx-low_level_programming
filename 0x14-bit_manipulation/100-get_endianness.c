#include "main.h"

/**
 * get_endianness - return the endainness of the machine
 * Return: 0 for big endain, 1 for little endian
 */
int get_endainness(void)
{
	int n = 1;

	return (*((char *) &n) + '0');
}
