#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: filename
 * @text_content: appended content
 *
 * Return: 1 on success and -1 on failure
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file_i, w, lett = 0;

if (filename == NULL)
return (-1);

if (text_content !=  NULL)
{
for (lett = 0; text_content[lett];)
lett++;
}

file_i = open(filename, O_WRONLY | O_APPEND);
w = write(file_i, text_content, lett);

if (file_i == -1 || w == -1)
return (-1);

close(file_i);
return (1);
}
