#include "main.h"

/**
 * create_file -  function that creates a file
 * @filename: name of the file to create
 * @text_content:  is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int file_i, w, lett = 0;

if (filename == NULL)
return (-1);

if (text_content != NULL)
{
for (lett = 0; text_content[lett];)
lett++;
}
file_i = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(file_i, text_content, lett);

if (file_i == -1 || w == -1)
return (-1);

close(file_i);
return (1);
}
