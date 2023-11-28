#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: A pointer to the name of the file.
 *
 * @text_content: The string to add to the end of the file.
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int opt, ipt, lenght;

	lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenght = 0; text_content[lenght];)
			lenght++;
	}

	opt = open(filename, O_WRONLY | O_APPEND);
	ipt = write(opt, text_content, lenght);

	if (opt == -1 || ipt == -1)
		return (-1);

	close(opt);

	return (1);
}
