#include "holberton.h"

/**
 *
 *
 *
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	int fread, fwrite, fd;

	if (filename == NULL)
		return(0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (free(buffer), 0);

	buffer = (char*) malloc(sizeof(char) * (letters + 1));
	if (!buffer)
		return (0);

	fread = read(fd, buffer, letters);
	if (fread == -1)
		return (0);

	buffer[letters] = '\0';

	fwrite = write(STDOUT_FILENO, buffer, fread);
	if (fwrite == -1)
		return (0);

	free(buffer);
	buffer = NULL;

	close(fd);

	return (fwrite);
}
