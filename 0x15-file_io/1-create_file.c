#include "main.h"
/**
 * create_file -function that creates a file
 * @filename: filename to be created
 * @text_content: content to be copied
 * Return: 1(succesful), -1(fails)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int rwr = 1;
	int letters = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[letters])
			letters++;
		rwr = write(fd, text_content, letters);
	}
	if (rwr == -1)
		return (-1);
	close(fd);
	return (1);
}

