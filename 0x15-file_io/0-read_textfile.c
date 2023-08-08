#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buffer = NULL;

	if (!filename)
		return (0);

	buffer = malloc(letters + 1);
	if (!buffer)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		goto cleanup;

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
		goto cleanup_fd;

	buffer[bytes_read] = '\0';

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
		goto cleanup_fd;

	close(fd);
	free(buffer);
	return (bytes_written);

cleanup_fd:
	close(fd);
cleanup:
	free(buffer);
	return (0);
}

