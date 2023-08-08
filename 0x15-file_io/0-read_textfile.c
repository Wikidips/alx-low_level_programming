#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file and print to STDOUT.
 * @filename: Text file to be read.
 * @letters: Number of letters to be read.
 * Return: Number of bytes, 0 on failure or if filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, w, t;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}

	t = read(fd, buffer, letters);
	w = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);

	return (w);
}

