#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);
/**
 * ceate_buffer - Allocates 1024 bytes
 * @file: buffer files
 *
 * Return: A pointer to the new buffer
 */
char *create_buffer(char *file)

{
char *buffer;
buffer = malloc(sizeof(char) * 1024);

if (buffer == NULL)
{
dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);

exit(99);
}
return (buffer);
}
/**
 * close_file - closes file descriptor
 * @fd: file descriptor to be close
 */
void close_file(int fd)
{
int i;
i = close(fd);
if (i == -1)
{
dprintf(STDERR_FILENO, "Error: can't close fd %d/n", fd);
exit(100);
}
}
/**
 * main - fxn copies the content of one file to another
 * @argc: The argument count
 * @argv: the argument passed
 *
 * Return: 1 on success
 */
int main(int argc, char *argv[])

{
int f, t, r, w;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file from file_to\n");
exit(97);
}
buffer = create_buffer(argv[2]);
f = open(argv[1], O_RDONLY);
r = read(f, buffer, 1024);
t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (f == -1 || r == -1)

{
dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
w = write(t, buffer, r);
if (t == -1 || w == -1)
{
dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
}
r = read(f,buffer, 1024);
t = open(argv[2], O_WRONLY | O_APPEND);
} while (r > 0);
free(buffer);
close_file(f);
close_file(t);

return (1);
}
