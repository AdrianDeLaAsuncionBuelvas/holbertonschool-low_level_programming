#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: variable that contains the filename
 * @text_content: variable that contains the content of text
 * Return: 1 on success, -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t size = 0;
	int fd, fw;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[size])
			size++;

	fw = write(fd, text_content, size);
	if (fw == -1)
		return (-1);

	}

	close(fd);
	return (1);

}
