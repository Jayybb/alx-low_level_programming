#include "main.h"
#include <unistd.h>
/**
 * read_textfile - Write a function that reads a text file and prints it
 * @filename: name of the file to read
 * @letters: number of letters it should write and print
 *
 * Return:  the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file_i;
ssize_t lenr, lenw;
char *buffer;

if (filename == 0)
return (0);

file_i = open(filename, O_RDONLY);
if (file_i == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)

{
close(file_i);
return (0);
}
lenr = read(file_i, buffer, letters);
close(file_i);
if (lenr == -1)
{
free(buffer);
return (0);
}
lenw = write(STDOUT_FILENO, buffer, lenr);
free(buffer);
if (lenr != lenw)
return (0);
return (lenw);
}
