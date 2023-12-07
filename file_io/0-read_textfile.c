#include "main.h"
/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: the name of the file
 * @letters: number of ltrs to print
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, file_r, file_wr;
	char *array;

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	array = malloc(sizeof(char) * letters);
	if (array == NULL)
	{
		return (0);
	}
	file_r = read(file, array, letters);
	if (file_r == -1)
	{
		return (0);
	}
	file_wr = write(STDOUT_FILENO, array, file_r);
	if (file_wr == -1)
	{
		return (0);
	}
	free(array);
	close(file);
	return (file_wr);
}
