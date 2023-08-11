#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * exit_error_str - Exits the program with an error.
 * @msg: The error message format string.
 * @info: Additional string information to be included in the error message.
 * @code: The exit code to be used when exiting the program.
 */
void exit_error_str(const char *msg, const char *info, int code)
{
	dprintf(STDERR_FILENO, msg, info);
	exit(code);
}

/**
 * exit_error_int - Exits the program with an error message.
 * @msg: The error message format string.
 * @info: Additional integer information to be included in the error message.
 * @code: The exit code to be used when exiting the program.
 */
void exit_error_int(const char *msg, const int info, int code)
{
	dprintf(STDERR_FILENO, msg, info);
	exit(code);
}
int main(int argc, char *argv[])
{
	const char *src_file = argv[1], *dest_file = argv[2];
	int dest_fd, src_fd;
	ssize_t nread;
	char buffer[1024];

	if (argc != 3)
		exit_error_str("Usage: cp source_file destination_file\n", "", 97);
	src_fd = open(src_file, O_RDONLY);
	if (src_fd == -1)
		exit_error_str("Error: Can't read from file %s\n", src_file, 98);

	dest_fd = open(dest_file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest_fd == -1)
	{
		close(src_fd);
		exit_error_str("Error: Can't write to %s\n", dest_file, 99);
	}

	while ((nread = read(src_fd, buffer, sizeof(buffer))) > 0)
	{
		ssize_t nwritten = write(dest_fd, buffer, nread);

		if (nwritten == -1)
		{
			close(src_fd);
			close(dest_fd);
			exit_error_str("Error: Can't write to %s\n", dest_file, 99);
		}
	}
	if (nread == -1)
	{
		close(src_fd);
		close(dest_fd);
		exit_error_str("Error: Can't read from file %s\n", src_file, 98);
	}
	if (close(src_fd) == -1)
		exit_error_int("Error: Can't close src_fd %d\n", src_fd, 100);
	if (close(dest_fd) == -1)
		exit_error_int("Error: Can't close dest_fd %d\n", dest_fd, 100);
	return (0);
}
