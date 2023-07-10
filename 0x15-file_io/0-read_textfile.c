#include "main.h"
/**
 * read_textfile - function with two arguments
 * @filename: name of the file
 * @letters: number of letters
 *
 * Description: reads a text file and prints
 * Return: 0 if filename is NULL or write fails
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
