#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: File name
 * @text_content: content of file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, a;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	while (text_content[i])
		i++;
	a = write(fd, text_content, i);
	close(fd);
	if (a == -1)
		return (-1);
	return (1);
}
