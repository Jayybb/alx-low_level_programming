#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 * @c: character to print
 *
 * Return: on sucess value 1,
 * on error, -1 is returned and error set appropriately
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
