#include "main.h"
/**
 * read_textfile -function that reads a text file and prints
 * it to the POSIX standard output
 * @letters:  number of letters to be read and printed
 * @filename: the filename
 * Return: the actual number of letters to be read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t nrd, nwr;
	int fd;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);
	nrd = read(fd, buff, letters);
	nwr = write(STDOUT_FILENO, buff, nrd);
	close(fd);
	free(buff);
	return (nwr);
}
