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
int file_i;
int nlett;
int rwr;

if (!filename)
return (-1)
