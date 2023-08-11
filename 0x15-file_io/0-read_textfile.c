#include"main.h"
/**
 * read_textfile - Reads a text file and print .
 * @filename:  pointer .
 * @letters : Number of letters .
 *
 * Return:  0 OR  the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fl, r, w;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fl = open(filename, O_RDONLY);
	r = read(fl, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	if (fl == -1 || r == -1 || w == -1 || w != r)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fl);

	return (w);
}
