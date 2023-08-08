#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the standard output
 * @filename: The name of the file
 * @letters: The number of letters to read and print
 *
 * Return: The number of letters actually read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int _open, _read, _write;
	char *buffer;
	ssize_t printed_letters = 0;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	_open = open(filename, O_RDONLY);
	if (_open == -1)
	{
		free(buffer);
		return (0);
	}

	_read = read(_open, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		close(_open);
		return (0);
	}

	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1 || _write != _read)
	{
		free(buffer);
		close(_open);
		return (0);
	}

	printed_letters = _write;

	free(buffer);
	close(_open);

	return (printed_letters);
}

