#include "main.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file -> this function create a file and write a the
 * text to it.
 *
 * @filename: the name of the file
 * @text_content: the text to be written to the file.
 *
 * Return: 1 if successful else -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, text_len;
	ssize_t total_size;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	text_len = strlen(text_content);

	total_size = write(fd, text_content, text_len);

	close(fd);

	if (total_size == -1)
		return (-1);

	return (1);
}
