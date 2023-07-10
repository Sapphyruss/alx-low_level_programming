#include "main.h"
/**
 * check_input - checks the input.
 * @argc: number of arguments.
 */

void check_input(int argc)
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename");
		exit(98);
	}
}

/**
 * close_file - close the ELF file.
 * @file: the ELF file.
 */

void close_file(int file)
{
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO, "Couldn't close the file %d\n", file);
		exit(98);
	}
}

/**
 * check_magic - checks the magic number to match an elf file.
 * @header: pointer to the magic number.
 */

void check_magic(unsigned char *header)
{
	int i;

	if (header[EI_MAG0] != ELFMAG0 ||
	header[EI_MAG1] != ELFMAG1 ||
	header[EI_MAG2] != ELFMAG2 ||
	header[EI_MAG3] != ELFMAG3)
	{
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
		exit(98);
	}
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", header[i]);
		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
/**
 * check_class - print the class of a elf file.
 * @header: pointer to an array.
 */
void check_class(unsigned char *header)
{
	printf("  Class:                             ");
	if (header[EI_CLASS] == ELFCLASSNONE)
		printf("none\n");
	else if (header[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else
		printf("ELF64\n");
}

/**
 * main - Display the information in a elf header file.
 * @argc: number of arguments.
 * @argv: array of arguments.
 * Return: 0
 */

int main(int argc, char **argv)
{
	int file;
	Elf64_Ehdr *buffer;
	ssize_t n_read;

	check_input(argc);
	file = open(argv[1], O_RDONLY);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	buffer = malloc(sizeof(Elf64_Ehdr));
	if (buffer == NULL)
	{
		close_file(file);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	n_read = read(file, &buffer, sizeof(buffer));
	if (n_read < 0 || n_read != sizeof(buffer))
	{
		free(buffer);
		close_file(file);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	check_magic(buffer->e_ident);
	check_class(buffer->e_ident);
	free(buffer);
	close_file(file);
	return (0);
}
