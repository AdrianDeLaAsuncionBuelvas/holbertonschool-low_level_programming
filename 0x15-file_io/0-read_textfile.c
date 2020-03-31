#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: File Name
 * @letters: size it will contain
 * Return: actual number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	int fread, fwrite, fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (free(buffer), 0);

/* Allocate a string that can hold it all*/
	buffer = (char *) malloc(sizeof(char) * (letters + 1));
	if (!buffer)
		return (0);

	fread = read(fd, buffer, letters);
	if (fread == -1)
		return (0);

	buffer[letters] = '\0';
	/* File descriptor STDOUT_FILENO */
	fwrite = write(STDOUT_FILENO, buffer, fread);
	if (fwrite == -1)
		return (0);
	/* Something went wrong, free the buffer*/
	/* The buffer to NULL*/
	free(buffer);
	buffer = NULL;

	/* Always close the file*/
	close(fd);

	return (fwrite);
}
