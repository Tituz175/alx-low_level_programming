#include "main.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile -> this function read a specific number
 * of bytes in a file
 * @filename: this is the given file
 * @letters: the number of bytes
 * Return: the number of characters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t total_size, initial_size;
	char *buffer;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd < 0)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	initial_size = read(fd, buffer, letters);
	close(fd);

	if (initial_size < 0)
	{
		free(buffer);
		return (0);
	}

	total_size = write(STDOUT_FILENO, buffer, initial_size);
	free(buffer);

	if (total_size != initial_size)
		return (0);

	return (total_size);
}
