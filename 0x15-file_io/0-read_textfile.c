#include "main.h"
/**
 *read_textfile-this is function that  reads a text file and prints.
 *@filename: pointer point to the  file name .
 *@letters: is the number of char that the function should print
 *Return: return number of letters could read or 0 if the pointer is NULL
 *        or we can't open the file or there is a problem in writing .
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, r, w;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, r);

	if (op == -1 || r == -1 || w == -1 || w != r)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(op);

	return (w);
}
