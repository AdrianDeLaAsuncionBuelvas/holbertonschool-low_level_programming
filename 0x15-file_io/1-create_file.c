#include "holberton.h"

/**
 * create_file - funtion that creates a file
 * @filename: variable that contains the filename
 * @text_content: variable that contains the content of text
 * Return: 1 on success, -1
 */

int create_file(const char *filename, char *text_content)
{

	ssize_t size = 0;
	int fd, fwrite;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[size] != '\0')
			size++;

	fwrite = write(fd, text_content, size);
	if (fwrite == -1)
		return (-1);

	}

	close(fd);
	return (1);

}
