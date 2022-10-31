#include "main.h"


/**
 * read_textfile - Function reads a text file and prints to POSIX.
 * @filename: Pointer to file to print.
 * @letters: Number of letters to print.
 * Return: Actual number of letters it could print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	char *buf;
	ssize_t nr, nw;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nr = read(f, buf, letters);
	nw = write(STDOUT_FILENO, buf, nr);

	close(f);

	free(buf);

	return (nw);
}
