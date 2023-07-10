#include "main.h"
/**
* read_textfile function reads a text file and print it to the standard output
* @filename the name of the file to be read
* @letters the number of letters it should read and print
* Return the number of letters read and printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file, n_read, n_write;

	if (filename == NULL)
	{
		return (0);
	}
	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	n_read = read(file, buffer, letters);
	if (n_read == -1)
	{
		close(file);
		free(buffer);
		return (0);
	}
	n_write = write(STDOUT_FILENO, buffer, n_read);
	if (n_write == -1)
	{
		close(file);
		free(buffer);
		return (0);
	}
	close(file);
	free(buffer);
	return (n_write);
}
