#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void check_IO_stat(int stat, int fd, char *filename, char mode);
/**
 * main - function copies the content of one file to another
 * @argc: the argument count
 * @argv: the argument passed
 *
 * Return: 1 on sucess
 */
int main(int argc, char *argv[])
{
int src, dest, n_read = 1024, wrote, close_src, close_dest;
unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

char buffer[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "%s", "usage:cp file_from file_to\n");
exit(97);
}
src = open(argv[1], O_RDONLY);
dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | mode);
check_IO_stat(src, -1, argv[2], 'W');
while (n_read == 1024)
{
n_read = read(src, buffer, sizeof(buffer));

if (n_read == -1)
check_IO_stat(-1, -1, argv[1], 'O');
wrote = write(dest, buffer, n_read);

if (wrote == -1)
check_IO_stat(-1, -1, argv[2], 'W');
}
close_src = close(src);
check_IO_stat(close_src, src, NULL, 'C');
close_dest = close(dest);
check_IO_stat(close_dest, dest, NULL, 'C');
return (0);
}
/**
 * check_IO_stat - function checks if a file can be opened or close
 * @stat: file descriptor of file to be opened
 * @filename: name of file
 * @mode: closing or opening
 * @fd: file descriptor
 *
 * Return: void
 */
void check_IO_stat(int stat, int fd, char *filename, char mode)
{
if (mode == 'C' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: can't close fd %d\n", fd);
exit(100);
}
else if (mode == 'O' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: can't read from file %s\n", filename);
exit(98);
}
else if (mode == 'W' && stat == -1)
{
dprintf(STDERR_FILENO, "Error: can't write to %s\n", filename);
exit(99);
}
}
