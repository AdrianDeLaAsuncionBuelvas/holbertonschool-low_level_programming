#include "holberton.h"

/**
 *
 *
 *
 *
 */

int create_file(const char *filename, char *text_content)
{

	ssize_t size = 0;
	int fd, fwrite;

	fd = open(filename, O_RDWR | O_CREAT | O_RDONLY, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[size])
			size++;

	fwrite = write(fd, text_content, size);
	if (fwrite == -1)
		return(-1);
	}

	close(fd);
	return (1);

}
