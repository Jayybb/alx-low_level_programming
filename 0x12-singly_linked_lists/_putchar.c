#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c
 * @c: The printed character
 *
 * Return: on success value of 1
 * on error, -1 is retuned and set appropriately
 */

int _putchar(char c)

{
return (write(1, &c, 1));
)
