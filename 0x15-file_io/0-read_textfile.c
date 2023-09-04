#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fildes;
	ssize_t read_bytes, written_bytes;
	char *buf;

	fildes = open(filename, O_RDONLY);
	if (fildes == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	read_bytes = read(fildes, buf, letters);
	written_bytes = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fildes);
	return (written_bytes);
}
