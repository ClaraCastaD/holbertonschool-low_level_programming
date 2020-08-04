#include "holberton.h"

/**
 * read_textfile - function that reads a text file and prints it
 * @filename: is the file to read
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, sz;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(letters * sizeof(char));
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	sz = write(STDOUT_FILENO, buf, read(fd, buf, letters));
	if (sz == -1)
		return (0);
	close(fd);
	free(buf);
	return (sz);
}
