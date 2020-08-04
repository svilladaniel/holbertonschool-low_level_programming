#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: File name
 * @letters: Number of letters
 * Return: Actual letters number or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t actual, previous;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		close(fd);
		return (0);
	}
	buffer = malloc(sizeof(char *) * letters);
	if (buffer == NULL)
		return (0);
	previous = read(fd, buffer, letters);
	close(fd);
	if (previous == -1)
	{
		free(buffer);
		return (0);
	}
	actual = write(STDOUT_FILENO, buffer, previous);
	free(buffer);
	return (actual);
}
