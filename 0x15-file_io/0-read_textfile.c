#include "main.h"

/**
 * read_textfile - This function reads the text file and prints it.
 *
 * @filename: The name of the file in the function.
 *
 * @letters: The number of letters to read.
 *
 * Return: Gives the actual number of letters.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t line_2_read, line_2_write, des;
	char *bfr;

	if (filename == NULL)
		return (0);

	des = open(filename, O_RDONLY);

	if (des < 0)
		return (0);

	bfr = malloc(sizeof(char) * letters);

	if (bfr == NULL)
		return (0);

	line_2_read = read(des, bfr, letters);

	if (line_2_read < 0)
	{
		free(bfr);
		return (0);
	}

	bfr[line_2_read] = '\0';
	close(des);
	line_2_write =  write(STDOUT_FILENO, bfr, line_2_read);

	if (line_2_write < 0)
	{
		free(bfr);
		return (0);
	}
	free(bfr);
	return (line_2_write);
}
