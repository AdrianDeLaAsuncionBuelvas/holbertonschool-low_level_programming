#include "holberton.h"

/**
 * main - copies the content of a file to another file
 * @ac: argument count
 * @av: argument vector
 * Return: 0 if success
 */

int main(int ac, char **av)
{
	int f1, f2, rd, c1, c2;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f1 = open(av[1], O_RDONLY);
	if (f1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	f2 = open(av[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((rd = read(f1, buffer, 1024)) > 0)
	{
		if (f2 < 0 || (write(f2, buffer, rd) != rd))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
		if (rd < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		c1 = close(f1);
		if (c1 < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
			exit(100);
		}
		c2 = close(f2);
		if (c2 < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2);
			exit(100);
		}
		return (0);
}
