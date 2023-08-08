#include "main.h"
/**
 *  read_textfile - reads a textfile and prints its content to POSIX.
 *
 * @filename: pointer to the file.
 * @letters: the letters that should be read and print.
 *
 * Return: number of letters.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file = open(filename, O_RDONLY);
	char *buffer = (char *)malloc(letters + 1);

	ssize_t bw, br;



	if (filename == NULL)
	{
		return (0);
	}


	if  (file == -1)
	{
		return (0);
	}


	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	br = read(file, buffer, (letters + 1));
	if (br == -1)
	{
		close(file);
		free(buffer);
		return (0);
	}
	bw = write(STDOUT_FILENO, buffer, br);
	if (bw != br)
	{
		close(file);
		return (0);
	}
	close(file);
	free(buffer);
	return (br);
}

