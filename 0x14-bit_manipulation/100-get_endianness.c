#include "main.h"

/**
 * get_endianness - checks endianness
 * Returns 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}i
