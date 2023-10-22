#include "main.h"

/**
 * append_text_to_file - This function appends text to the end of a file
 *
 * where filename is the name of the file and text_content is the NULL terminated string to add at the end of the file
 *
 * @filename: The parameter to which text is appended.
 *
 * @text_content: The content parameter to append to the file
 *
 * Return: Gives 1 on success, -1 on failure as output.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int description;
	int line_2_write;
	int idx = 0;

	if (filename == NULL)
		return (-1);

	description = open(filename, O_WRONLY | O_APPEND);

	if (description < 0)
		return (-1);

	if (text_content)
	{
		while(text_content[idx])
			idx++;

		line_2_write = write(description, text_content, idx);

		if (writeline != idx)
			return (-1);
	}
	close(description);
	return (1);
}
