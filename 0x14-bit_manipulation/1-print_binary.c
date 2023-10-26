#include "main.h"

/**
 * print_binary - function that prints binary representation of number
 * @n: number to be printed
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
unsigned long int divisor, check;
char i;

i = 0;
divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
while (divisor != 0)
{
check = n & divisor;
if (check == divisor)
{
i = 1;
_putchar('1');
}
else if (i == 1 || divisor == 1)
{
_putchar('0');
}
divisor >>= 1;
}
}
