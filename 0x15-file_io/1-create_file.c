#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to file
 * @text_content: the string we use
 * Return: 1 in success -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
	int fle, act, lenght = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[lenght])
			lenght++;
	}
	fle = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	act = write(fle, text_content, lenght);

	if (fle == -1 || act == -1)
		return (-1);
	close(fle);
	return (1);
}
