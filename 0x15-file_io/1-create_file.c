#include "main.h"
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>


int create_file(const char *filename, char *text_content)
{
	int fd, text_len;
    ssize_t total_size;

    if(filename == NULL)
        return (-1);

    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

    text_len = strlen(text_content);

    if (fd == -1)
        return (-1);

    if (text_len == 0)
        text_content = "";

    total_size = write(fd, text_content, text_len);
    
    close(fd);

    if (total_size == -1)
        return (-1);

    return (1);    
}