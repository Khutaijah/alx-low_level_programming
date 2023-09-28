#include "main.h"

/**
 * get_endianness - checks endianness in a machine
 * and determines if its big or little
 * Returns:0 for big, 1 for little
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
