#include "main.h"
/**
 * append_text_to_file - a function that appends text at the end of a file.
 *
 * @filename:file to append to.
 * @text_content: NULL terminated string to add.
 *
 * Return: return 1 on success and -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bw, len;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0600);
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
