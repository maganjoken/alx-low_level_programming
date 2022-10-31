#include "main.h"
<<<<<<< HEAD

=======
>>>>>>> 924a38376b31d6233849f78e20ec918e29bf45bd
/**
 * get_endianness - return the endianness of the machine
 *
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	int n = 1;

	return (*((char *) &n) + '0');
}
