#include "main.h"

/**
* read_textfile-reads a text file and prints it to POSIX STDOUT
* @filename:name of file to read from
* @letters: number of letters to be read and print
* Return: on success number of letters it could read and print,
* 0 if file cant be opened or read,
* 0 if filename is NULL,
* 0 if write fails or does not write expected amount of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, let, w;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	let = read(file, text, letters);

	w = write(STDOUT_FILENO, text, let);

	close(file);

	return (w);
}
