#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and
 * -prints it to the POSIX standard output.
 *
 * @filename: name of the file
 *
 * @letters: number of letters it should read
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int desc, read_line, write_line;
	char *buff;

	if (filename == NULL)
		return (0);
	desc = open(filename, O_RDONLY);
	if (desc < 0)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	read_line = read(desc, buff, letters);
	if (read_line < 0)
	{
		free(buff);
		return (0);
	}
	buff[read_line] = '\0';
	close(desc);
	write_line =  write(STDOUT_FILENO, buff, read_line);
	if (write_line < 0)
	{
		free(buff);
		return (0);
	}
	free(buff);
	return (write_line);
}
