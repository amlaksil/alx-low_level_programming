#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * error_msg - check for error message
 * @fd_from: source file
 * @fd_to: destination
 * @av: argument vector
 *
 * Return: nothing
 */

void error_msg(int fd_from, int fd_to, char *av[])
{
	if (fd_from == -1)
	{
		dprintf(2, "Error: can't read from %s\n", av[1]);
		exit(98);
	}
	if (fd_to == -1)
	{
		dprintf(2, "Error: can't write to %s\n", av[2]);
		exit(99);
	}
}

/**
 * main - copies the content of a file to another file
 * @ac: argument count
 * @av: agrumnt vector
 *
 * Return: 0 (on success)
 */

int main(int ac, char **av)
{
	int fd_from, fd_to, wr, n = 1024;
	int c_err_f, c_err_t;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to \n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_msg(fd_from, fd_to, av);

	while (n == 1024)
	{
		n = read(fd_from, buf, 1024);
		if (n == -1)
			error_msg(-1, 0, av);
		wr = write(fd_to, buf, 1024);
		if (wr == -1)
			error_msg(0, -1, av);
	}
	c_err_f = close(fd_from);
	if (c_err_f == -1)
	{
		dprintf(2, "Error: can't close fd %d\n", fd_from);
		exit(100);
	}
	c_err_t = close(fd_to);
	if (c_err_t == -1)
	{
		dprintf(2, "Error: can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
