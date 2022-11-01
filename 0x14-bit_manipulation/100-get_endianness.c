#include "main.h"

/**
 * get_endianness - return the endainness of the machine
 * Return: 0 for big endain, 1 for little endian
 */
int get_endainness(void)
{
	int num;

	num = 1;
	if(*(char *)&num == 1)
		return (1);
	else
		return (0);
}
