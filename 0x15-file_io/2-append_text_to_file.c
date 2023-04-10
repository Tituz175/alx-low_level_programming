#include "main.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file -> this function append text at the end of
 * a file.
 * @filename: the name of the file
 * @text_content: the text needed to be append
 * Return: 1 always if successful else -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, content_len, total_size;

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	if (text_content)
	{
		content_len = strlen(text_content);
		total_size = write(fd, text_content, content_len);
	}

	close(fd);

	if (total_size == -1)
		return (-1);

	return (1);
}
