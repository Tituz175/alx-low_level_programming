#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

void elf_checker(unsigned char *e_ident)
{
	int count;

	for(count = 0; count < 4; count++)
	{
		if (e_ident[count] != 127 && e_ident[count] != 'E' && e_ident[count] != 'L' && e_ident[count] != 'F')
		{
			dprintf(2, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

void close_elf(int fd, char *name)
{
	if (close_elf(fd) == -1)
	{
		dprintf(2, "Error: Can't close %s")
	}
}



int main(int argc, char *argv[])
{
	Elf64_Ehdr *header;
	int fd_open, fd_read;

	char *filename = argv[argc - 1]
	char *buffer[sizeof(Elf64_Ehdr)];

	fd_open = open(filename, O_RDONLY)

	if (fd_open == -1)
	{
		dprintf(2, "Error: Can't read file %s\n", filename);
		exit(98);
	}


	header = malloc(sizeof(Elf64_Ehdr));

	if (header == NULL)
	{
		close_elf(fd_open);
		dprintf(2, "Error: Can't read file %s\n", filename);
		exit(98);
	}

	fd_read = read(fd_open, header, buffer)

	if (fd_read == -1)
	{
		free(header);
		close_elf(fd_open);
		dprintf(2, "Error: %s, No such file\n", filename);
		exit(98);
	}

	elf_checker(header->e_ident);

	free(header);
	close_elf(fd_open);

	return (0);
}
