#include "main.h"
/**
 * create_file - a function that crates a file.
 * @filename: file to create.
 * @text_content: Null terminated string to write to the file.
 *
 * Return: 1 on success and -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
	int fd, bw, len;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
	return (-1);
	}
	if (text_content != NULL)
	{
		len = strlen(text_content);

		bw = write(fd, text_content, len);

		if (bw == -1)
		{
			close(fd);
			return (-1);
		}

	}
	close(fd);
	return (1);
}
