#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int copy_to_file(const char *source_file, const char *destination_file);

/**
 * main - check the code
 *
 * @ac: argument count
 * @av: arguments passed
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_to_file(av[1], av[2]);

	return (0);
}

/**
 * copy_to_file -> this function copies data from file a source file
 * to a destination file.
 * @source_file: the source file
 * @destination_file: the destination file
 * Return: always 0
 */

int copy_to_file(const char *source_file, const char *destination_file)
{
	char buffer[1024];
	int fd_source, fd_dest, write_len, close_src, close_dest, threshold = 1024;

	fd_source = open(source_file, O_RDONLY);

	if (fd_source == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", source_file);
		exit(98);
	}

	fd_dest = open(destination_file, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_dest == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", destination_file);
		exit(99);
	}

	while (threshold == 1024)
	{
		threshold = read(fd_source, buffer, sizeof(buffer));
		if (threshold == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", source_file);
			exit(98);
		}

		write_len = write(fd_dest, buffer, threshold);
		if (write_len == -1)
		{
			dprintf(2, "Error: Can't write to file %s\n", destination_file);
			exit(99);
		}
	}

	close_dest = close(fd_dest);

	if (close_dest == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", close_dest);
		exit(100);
	}

	close_src = close(fd_source);

	if (close_src == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", close_src);
		exit(100);
	}
	return (0);
}
