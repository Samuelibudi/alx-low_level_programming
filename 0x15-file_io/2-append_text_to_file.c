#include "main.h"

/**
 * append_text_to_file - Function that appends at the end of a file.
 * @filename: Pointer to file to append to.
 * @text_content: Pointer to content to append
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int nlet;
	int rw;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		for (nlet = 0; text_content[nlet]; nlet++)
			;

		rw = write(f, text_content, nlet);

		if (rw == -1)
			return (-1);
	}
	close(f);

	return (1);
}
