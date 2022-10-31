#include "main.h"

/**
 * create_file - A function that creates a file.
 * @filename: Pointer to file to create.
 * @text_content: Pointer to text content.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int nlet = 0;
	int rw;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (; text_content[nlet]; nlet++)
		;

	rw = write(f, text_content, nlet);

	if (rw == -1)
		return (-1);

	close(f);

	return (1);
}
